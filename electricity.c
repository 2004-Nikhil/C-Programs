/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  2.Write a C program to input electricity unit and calculate total electricity bill according to the 
    given condition.
    For first 50 units Rs 0.50 per unit
    For next 100 units Rs 0.75 per unit
    For next 100 units Rs 1.20 per unit
    For unit above 250 Rs 1.50 per unit
    An additional surcharge of 20% of bill is added.
*/
#include <stdio.h>
float main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    float n;
    printf("Enter the electricity unit \n");
    scanf("%f",&n);
    float cost=0;
    if(n<=50)
     cost = n*0.5;
    else if(n<=150)
     cost = 25+(n-50)*0.75;
    else if(n<=250)
     cost = 100+(n-150)*1.2;
    else
     cost = 220+(n-250)*1.5;

    cost+=0.2*cost;
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("The total electricity bill is %f \n",cost);
    return 0;
}