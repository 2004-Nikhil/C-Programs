#include <stdio.h>
#include <string.h>
int main() 
{
    char st[100],words[100][100], ch;
    int i,j, wordCount = 0;
    printf("Enter the lines .\n");
    gets(st);
    st[strlen(st)]=32;
    st[strlen(st)]='\0';
    i=0;
    for(j=0;j<strlen(st);j++)
    {
        ch=st[j];
        words[wordCount][i++] = ch;
        if(ch==32)
        {
            words[wordCount++][i] = '\0';
            i=0;
        }
    }
    int max=0;
    int min=1000;
    char ma[100],mi[500];
    for(i=0;i<wordCount;i++)
    {
        if(strlen(words[i])>max)
        {
            max=strlen(words[i]);
            strcpy(ma,words[i]);
        }
        if(strlen(words[i])<min)
        {
            min=strlen(words[i]);
            strcpy(mi,words[i]);
        }
    }
    printf("Largest string : %s\n Smallest :%s",ma,mi);
    return 0;
}