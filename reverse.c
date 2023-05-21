/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  8. Write a C program to input n integer numbers from user and print reverse of each 
    number.

*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter number of terms ");
    scanf("%d",&n);
    int a[100],re[100],i,r=0,t;
    printf("Enter %d number \n?",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        t=a[i];
        r=0;
        while(t>0)
        {
            r+=t%10;
            r*=10;
            t/=10;
        }
        r/=10;
        re[i]=r;
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=1;i<=n;i++)
     printf("Reverse of %d = %d\n",a[i],re[i]); 
    return 0;
}