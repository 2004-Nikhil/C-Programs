#include <stdio.h>
int main() {
    char st[100],ch;
    int i;
    FILE *f;
    f = fopen("file.txt", "w");
    printf("Enter the line \n");
    while((ch=getchar())!=EOF)
        fputc(ch,f);
    fclose(f);
    f = fopen("file.txt", "r");
    if(getc(f)==-1)
    printf("File is empty");
    else
    printf("File not is empty");
    return 0;
}