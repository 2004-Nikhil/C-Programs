void un(int [],int);
#include <stdio.h>
int main()
{
    int a[100],b[100],c[100],n1,n2,i;
    printf("Enter a the limit for Array 1 \n");
    scanf("%d",&n1);
    printf("Enter %d numbers for Array 1 \n",n1);
    for(i=0;i<n1;i++)
    {
        scanf("%d",&a[i]);
        c[i]=a[i];
    }
    printf("Enter a the limit for Array 2 \n");
    scanf("%d",&n2);
    printf("Enter %d numbers for Array 2 \n",n2);
    for(i=0;i<n2;i++)
    {
        scanf("%d",&b[i]);
        c[n1+i]=b[i];
    }
    un(c,n1+n2);
    return 0;
}
void un(int a[],int n)
{
    int i,j,pos;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            { for(pos=j;pos<n;pos++)
                  a[pos]=a[pos+1];
                n--;j--;
            }
        }
    printf("%d ",a[i]);
    }
}