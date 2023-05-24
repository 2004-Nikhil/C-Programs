#include <stdio.h>
int main() 
{
    FILE *f1,*f2;
    char word[100];
    char ch;
    int c=0;
    f1 = fopen("file.txt", "w");
    if (f1 == NULL) 
    {
        printf("Error in using the file.\n");
        return 1;
    }
    printf("Enter the lines .\n");
    while((ch=getchar())!=EOF)
        fputc(ch,f1);
    fputc(32, f1);
    fclose(f1);
    f1 = fopen("file.txt", "r");
    f2 = fopen("output.txt", "w");
    while ((ch=getc(f1))!=EOF) 
    {
        if(ch>=65 && ch<=90)
            fputc(ch+32,f2);
        else if (ch>=97 && ch<=122)
            fputc(ch-32,f2);
        else
            fputc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
    f2 = fopen("output.txt", "r");
     while ((ch = fgetc(f2)) != EOF)
       putchar(ch);
    fclose(f2);
    return 0;
}