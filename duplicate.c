//Write a code to remove duplicate elements in an array using function.
void delete(int[],int);
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int i,n,a[100];
    printf("Enter a the limit \n");
    scanf("%d",&n);
    printf("Enter %d numbers \n",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    delete(a,n);
    return 0;
}
void delete(int a[],int n)
{
    int i=0,j=0,t=0;
    
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    for(i=0;i<n-1;i++)
    {
        if(a[i]==a[i+1])
        {
            for(j=i;j<n;j++)
            {
                a[j]=a[j+1];
            }
            --i;--n;
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
}