#include<stdio.h>
#include<stdlib.h>
int main() 
{
    char *p;int n;
    printf("Enter the length of string\n");
    scanf("%d", &n);
    n+=1;//Because last character keeps on going after \n position .
    p = (char *)calloc(n,sizeof(char));
    printf("Enter the string\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%c", (p+i));
    }
    for(int i=0;i<=n/2;i++)
    {
        char t = *(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=t;
    }
    puts(p);  
    return 0;
}