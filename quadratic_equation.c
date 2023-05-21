/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  1. WAP to find roots of a quadratic equation, equation is of the form 
     (ax^2+bx+c=0)
*/
#include <stdio.h>
#include <math.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    float a,b,c;
    printf("Enter the number ? \n");
    scanf("%f%f%f",&a,&b,&c);
    float d,r1,r2;
    d=b*b-4*a*c;
    r1=(-b+sqrt((b*b)-(4*a*c)))/(2*a);
    r2=(-b-sqrt((b*b)-(4*a*c)))/(2*a);
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    if(d>0)
      printf("The roots of the quadratic equation are %f and %f ",r1,r2);
    else if(d==0)
      printf("The root of the quadratic equation is %f ",r1);
    else
      printf("The roots of the quadratic equation are imaginary");
    return 0;
}