#include<stdio.h>
int main()
{
    char st[50],c;
    printf("Enter a String \n");
    gets(st);
    int i,l = strlen(st);
    for(i=0;i<l;i++)
    {
        c=st[i];
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='A'||c=='E'||c=='I'||c=='O'||c=='U')
        {
            if(c>=65&&c<=90)
             st[i]+=32;
        }
        else
        {
            if(c>=97&&c<=122)
             st[i]-=32;
        }
    }
    puts(st);
}