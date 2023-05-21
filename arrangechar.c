#include <stdio.h>
#include <string.h>
int main()
{
    char c,st[100];int l,i,j;
    printf("Enter string ");
    gets(st);
    l=strlen(st);
    for(i=0;i<l-1;i++)
    {
        for(j=0;j<l-i-1;j++)
        {
            if(st[j]>st[j+1])
            {
                c=st[j];
                st[j]=st[j+1];
                st[j+1]=c;
            }
        }
    }
    st[l]='\0';
    
    puts(st);
    return 0;
}