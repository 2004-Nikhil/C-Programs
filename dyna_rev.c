#include<stdio.h>
#include<stdlib.h>
int main() 
{
    int *p, n;
    printf("Enter the number of terms\n");
    scanf("%d", &n);
    p = (int *)calloc(n,sizeof(int));
    printf("Enter the numbers\n");
    for(int i=0; i<n; i++) 
    {
        scanf("%d", (p+i));
    }
    for(int i=0;i<=n/2;i++)
    {
        int t = *(p+i);
        *(p+i)=*(p+n-1-i);
        *(p+n-1-i)=t;
    }
    for(int i=0; i<n; i++)
    {
        printf("%d ", *(p+i));
    }  
    return 0;
}