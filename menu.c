/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  17. Write a menu driven program using functions that can perform the following tasks on 
      pressing given keys:
      1. Check a number is odd or even.
      2. Print reverse of a number.
      3. Print sum of series 1+3+5+7+9……upto n
      4. Exit
*/
void oe();
void rev();
void ser();
#include <stdio.h>
int main()
{
    int k;char ch;
    do
    {
       printf("\t\t\t\t\t\t*****INPUT*****\n");
       printf("Enter 1 to check if a number is odd or even \n");
       printf("Enter 2 to print reverse of a number \n");
       printf("Enter 3 to print sum of series 1+3+5+7+9 upto n terms \n");
       printf("Enter 4 to exit \n");
       scanf("%d",&k);
       switch (k)
       {
          case 1 : oe();break;
          case 2 : rev();break;
          case 3 : ser();break;
          case 4 : return 0;
       }
       char c = getchar();
       printf("Do you wish to continue ? press Y \n");
       scanf("%c",&ch);
    } while (ch=='Y');
    return 0;
}
void oe()
{
    int n;
    printf("Enter a number ?\n");
    scanf("%d",&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    if(n%2==0)
     printf("Even Number \n");
    else
     printf("Odd Number \n");
}
void rev()
{
   int n,r=0;
    printf("Enter a number ?\n");
    scanf("%d",&n);
    while(n>0)
    {
      r+=n%10;
      r*=10;
      n/=10;
    }
    r/=10;
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("Reverse = %d \n",r);
}
void ser()
{
    int i,n,s=0;
    printf("Enter value of n ? \n");
    scanf("%d",&n);
    for(i=1;i<=2*n;i+=2)
     s+=i;
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("Sum = %d \n",s);
}