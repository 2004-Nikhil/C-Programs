#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter a the limit \n");
    scanf("%d",&n);
    int i=0,j=0,t=0,f=0,a[100];
    printf("Enter %d numbers \n",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
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
            if(a[i]!=a[i+1])
            f=1;
        }
        if((f==1))
        {
            for(j=i;j<n;j++)
            {
                a[j+1]=a[j+2];
            }
            --i;--n;
            f=0;
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=0;i<n;i++)
     printf("%d ",a[i]);
    return 0;
}