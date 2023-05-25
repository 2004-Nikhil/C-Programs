#include <stdio.h>
int main() 
{
    FILE *f1,*f2;
    int c=0,i,n;
    f1 = fopen("file.txt", "w");
    f2 = fopen("out.txt", "w");
    printf("Enter the numbers .\n");
    for (i = 1; i <= 10; i++) 
    {
        scanf("%d",&n);
        putw(n, f1);
        if(n%7==0)
        {
            putw(n, f2);
            c++;
        }
    }
    fclose(f1);
    fclose(f2);
    f2 = fopen("out.txt", "r");
    for(i=1;i<=c;i++)
    {
        n = getw(f2);
        printf("%d ",n);
    }
    fclose(f2);
    return 0;
}