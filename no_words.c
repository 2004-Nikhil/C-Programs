#include <stdio.h>
int main() 
{
    FILE *f1;
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
    while ((ch=getc(f1))!=EOF) 
    {
        if(ch==' ')
            c++;
    }
    fclose(f1);
    printf("%d",c);
    return 0;
}