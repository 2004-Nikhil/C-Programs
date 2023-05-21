#include<string.h>
#include<stdio.h>
int main()
{
    char st[100],c;
    printf("Enter the string\n");
    gets(st);
    int i,l = strlen(st),a[28],max=0,min=l+1;char mac,mic;;
    for(i=0;i<26;i++)
    a[i]=0;
    for(c=97;c<123;c++)
    {
        for(i=0;i<l;i++)
        {
            if(st[i]==c)
            a[c-97]++;
        }
        if(a[c-97]>max)
        {
            max=a[c-97];
            mac=c;
        }
        if(a[c-97]<min&&a[c-97]!=0)
        {
            min=a[c-97];
            mic=c;
        }
    } 
    i=0;
    while(st[i]!='\0')
    {
        if(st[i]==mic)
        st[i]=mac;
        else if(st[i]==mac)
        st[i]=mic;
        i++;
    }
    puts(st);
}