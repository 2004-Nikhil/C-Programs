/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  20. Write a program in C to calculate the sum of numbers from 1 to n using recursion.
*/
int sum(int);
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n,res;
    printf("Enter number of terms \n");
    scanf("%d",&n);
    res=sum(n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("Sum of series is %d \n",res);
    return 0;
}
int sum(int n)
{
    if(n==0)
     return 0;
    else
     return n+sum(n-1);
}