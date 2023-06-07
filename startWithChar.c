#include <stdio.h>
#include <string.h>
int main() 
{
    FILE *file;
    char words[100], ch,ca;
    int i=0,c=0;
    file = fopen("input.txt", "w");
    printf("Enter the lines .\n");
    while ((ch = getchar()) != EOF)
        fputc(ch, file);
    fputc(32, file);
    fclose(file);
    printf("Enter the character.\n");
    scanf("%c",&ca);
    file = fopen("input.txt", "r");
    while ((ch = getc(file)) != EOF) 
    {
        i = 0;
        words[i++] = ch;
        while ((ch = getc(file)) != 32)
            words[i++] = ch;
        words[i] = '\0';
        if(words[0] == ca)
         c++;
    }
    fclose(file);
        printf("%d ", c);
    return 0;
}