#include <stdio.h>
#include <string.h>
int main() 
{
    FILE *file;
    char words[100],sw[100], ch;
    int i, swl = 1000;

    file = fopen("input.txt", "w");
    printf("Enter the lines .\n");
    while ((ch = getchar()) != EOF)
        fputc(ch, file);
    fputc(32, file);
    fclose(file);
    file = fopen("input.txt", "r");
    while ((ch = getc(file)) != EOF) 
    {
        i = 0;
        words[i++] = ch;
        while ((ch = getc(file)) != 32)
            words[i++] = ch;
        words[i] = '\0';
        if(strlen(words)<swl)
        {
            swl=strlen(words);
            strcpy(sw,words);
        }
    }
    fclose(file);
    printf("\nSmallest :%s",sw);
    return 0;
}