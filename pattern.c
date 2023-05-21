/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  7. Write a program to print following pattern:
    *        *
    **      ** 
    ***    ***
    ****  ****
    **********
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter a number ");
    scanf("%d",&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    int i,j;
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
         printf("*");
        for(j=1;j<=2*(n-i);j++)
         printf(" ");
        for(j=1;j<=i;j++)
         printf("*"); 
        printf("\n");       
    }
    return 0;
}