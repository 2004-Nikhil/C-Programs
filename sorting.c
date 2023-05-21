/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  12. Input n elements in an array and organize them in descending order using a sorting 
      technique.
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter a the limit \n");
    scanf("%d",&n);
    int i=0,j=0,t=0,a[100];
    printf("Enter %d numbers \n",n);
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
    for(i=0;i<n-1;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]<a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=0;i<n;i++)
     printf("%d\n",a[i]);
    return 0;
}