#include <stdio.h>
#include <string.h>
int main() {
    FILE *file;
    char ch,line[1000];
    file = fopen("input.txt", "w+");
    printf("Enter a paragraph :\n");
    while((ch=getchar())!=EOF)
        fputc(ch,file);
    rewind(file);
    while (fgets(line, sizeof(line), file)) 
    {
        char *token,c;
        token = strtok(line, " \n");
        while (token != NULL) 
        {
            strrev(token);
            printf("%s ", token);
            token = strtok(NULL, " \n");
        }
        printf("\n");
    }
    fclose(file);
    return 0;
}