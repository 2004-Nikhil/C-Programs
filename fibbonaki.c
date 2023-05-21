/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  16. Write a user defined function to print Fibonacci series.
*/
int fib(int,int,int);
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n,res,a=0,b=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    res=fib(n,a,b);
    return 0;
}
int fib(int n,int a,int b)
{   if(n==0)
     return 0;
    else
    {
        printf("%d ",a);
        return fib(n-1,b,(a+b));
    }
}