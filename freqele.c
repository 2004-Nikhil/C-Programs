void freq(int[],int);
#include <stdio.h>
int main()
{
    int i,n,a[100];
    printf("Enter a the limit \n");
    scanf("%d",&n);
    printf("Enter %d numbers \n",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    freq(a,n);
    return 0;
}
void freq(int a[],int n)
{
    printf("Frequency of each numbers \n");
    int i,j,pos,f=0;
    for(i=0;i<n-1;i++)
    {f=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            { for(pos=j;pos<n;pos++)
                  a[pos]=a[pos+1];
                f++;n--;j--;
            }
        }
    printf("%d -> %d\n",a[i],f);
    }
}