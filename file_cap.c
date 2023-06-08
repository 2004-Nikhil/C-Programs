#include <stdio.h>
#include <stdlib.h>


int main() {
    char st[100],ch;
    int i;
    FILE *f1,*f2;
    f1 = fopen("file.txt", "w");
    printf("Enter the line \n");
    gets(st);
    fprintf(f1,"%s",st);
    fclose(f1);
    f1 = fopen("file.txt", "r");
    f2 = fopen("file2.txt", "w");
    while((ch=getc(f1))!=EOF)
    {
        if(ch>=65&&ch<=90)
            fprintf(f2,"%c",ch);
    }
    fclose(f1);
    fclose(f2);
    f2 = fopen("file2.txt", "r");
    while((ch=getc(f2))!=EOF)
    {
        printf("%c",ch);
    }
    return 0;
}