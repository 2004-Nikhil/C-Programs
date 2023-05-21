/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  4. Write a C program to find maximum and minimum among n integer number.
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter number of terms ? \n");
    scanf("%d",&n);
    int i,a,min,max;
    printf("Enter %d numbers ? \n",n);
    scanf("%d",&a);
    min=a;
    max=a;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a);
        if(a<min)
          min=a;
        if(a>max)
          max=a;
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("The maximum integer is %d and minimum integer is %d",max,min);
    return 0;
}