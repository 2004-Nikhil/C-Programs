#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *p, n,i,j,c,max=0,mn;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    p = (int *)malloc(n * sizeof(int));
    printf("Enter the numbers\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", (p+i));
    }
    for (i = 0; i < n; i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(*(p+i)==*(p+j))
            {
                c++;
            }
        }
        if(c>max)
        {
            max=c;
            mn=*(p+i);
        }
    }
    printf("%d",mn);
    return 0;
}