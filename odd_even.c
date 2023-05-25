#include <stdio.h>
int main() 
{
    FILE *f1,*f2,*f3;
    int c1=0,c2=0,i,n;
    f1 = fopen("file.txt", "w");
    f2 = fopen("even.txt", "w");
    f3 = fopen("odd.txt", "w");
    printf("Enter the numbers .\n");
    for (i = 1; i <= 10; i++) 
    {
        scanf("%d",&n);
        putw(n, f1);
        if(n%2==0)
        {putw(n,f2);c1++;}
        else
        {putw(n,f3);c2++;}
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
    f2 = fopen("odd.txt", "r");
    f3 = fopen("even.txt", "r");
    printf("Even numbers .\n");
    for(i=1;i<=c1;i++)
    {
        n = getw(f2);
        printf("%d ",n);
    }
    printf("\n");
    printf("Odd numbers .\n");
    for(i=1;i<=c2;i++)
    {
        n = getw(f3);
        printf("%d ",n);
    }
    fclose(f2);
    fclose(f3);
    return 0;
}