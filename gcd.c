/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  19. Write a recursive code to print gcd of 2 numbers.
*/
int g(int,int);
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n1,n2,res;
    printf("Enter 2 numbers ? \n");
    scanf("%d%d",&n1,&n2);
    res=g(n1,n2);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("GCD is %d \n",res);
    return 0;
}
int g(int n1,int n2)
{
    if(n1==0)
     return n2;
    else
     return g(n2%n1,n1);
}