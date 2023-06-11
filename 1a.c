#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    FILE *file;
    char ch,line[1000];
    file = fopen("input.txt", "w");
    printf("Enter a paragraph (press Enter and then Ctrl+D to finish):\n");
    while((ch=getchar())!=EOF)
        fputc(ch,file);
    fclose(file);
    file = fopen("input.txt", "r");
    while (fgets(line, sizeof(line), file)) 
    {
        char *token;
        token = strtok(line, " \n");
        while (token != NULL) 
        {
            int length = strlen(token);
            for (int i = length - 1; i >= 0; i--) 
                printf("%c", token[i]);
            printf(" ");
            token = strtok(NULL, " \n");
        }
        printf("\n");
    }
    fclose(file);
    return 0;
}