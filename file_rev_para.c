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
        char *token,c;
        token = strtok(line, " \n");
        while (token != NULL) 
        {
            int l = strlen(token);
            for (int i = 0; i <= l/2; i++) 
                {
                    c=token[i];
                    token[i]=token[l-i-1];
                    token[l-i-1]=c;
                }
            printf("%s ", token);
            token = strtok(NULL, " \n");
        }
        printf("\n");
    }
    fclose(file);
    return 0;
}