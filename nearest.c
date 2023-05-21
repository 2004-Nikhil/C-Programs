/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  10. Input n numbers in an array and find the nearest lesser and nearest greater element 
      than a given element.
*/
void near(int);
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter a the limit \n");
    scanf("%d",&n);
    int i=0,x=0,j=0,t=0,a[100];
    printf("Enter %d numbers \n",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    printf("Enter the element whose nearest lesser and nearest greater are to be found \n");
    scanf("%d",&x);
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
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    if(x==a[n-1])
    {
        printf("%d is the greatest element itself\n",x);
    }
    else
    {
        for(i=0;i<n;i++)
        {
            if(x<a[i])
            {
                printf("nearest greater is %d \n",a[i]);
                break;
            }
        }
    }
    if(x==a[0])
    {
        printf("%d is the smallest element itself\n",x);
    }
    else
    {
        for(i=n-1;i>=0;i--)
        {
            if(x>a[i])
            {
                printf("nearest lesser is %d \n",a[i]);
                break;
            }
        }
    }
    return 0;
}