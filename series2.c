/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  9. Write a C program to find sum of following series:
     1 + 1/3! + 1/5! + 1/7! + ……… 1/n!
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    float a,i,j,n,s=0,f=1;
    printf("Enter value of n ? \n");
    scanf("%f",&n);
    for(i=1;i<=n;i+=2)
    {
        f=1;
        for(j=1;j<=i;j++)
        f=f*j;
        a=1/f;
        s=s+a;
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("%f",s);
    return 0;
}