/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  5. Write a program to print following series: 0 3 8 15 24 35 48 … Upto n term.
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int i,n;
    printf("Enter number of terms ? \n");
    scanf("%d",&n);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    for(i=1;i<=n;i++)
     printf("%d ",i*i-1);
    return 0;
}