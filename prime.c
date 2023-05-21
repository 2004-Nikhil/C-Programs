/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  6. Write a program to print all the prime numbers between the range m and n.

*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int m,n,i,j,f=0;
    printf("Enter the Lower limit and Upper limit \n");
    scanf("%d%d",&m,&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=m;i<=n;i++)
    {
        f=0;
        for(j=2;j<=i/2;j++)
         {
           if(i%j==0)
            f++;
         }
         if(f==0)
         printf("%d ",i);
    }
    return 0;
}