/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  3. Write a C program to find factors of a number and check whether number is perfect or 
     not.
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n,s=0;
    printf("Enter a number ? \n");
    scanf("%d",&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    int i;
    printf("The factors of number are ");
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
         {
            printf("%d ",i);
            s=s+i;
         }
    }
    if(s==n)
      printf("\nPerfect Number");
    else
      printf("\nNot a Perfect number");
    return 0;
}