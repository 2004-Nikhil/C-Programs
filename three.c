/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  18.	Write a user defined code to input 10 elements in an array (all distinct). 
        Pass this array to the function and print the sum of first three smallest and 
        first three largest elements present in the array.
*/
void sum(int[]);
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int i,a[10];
    printf("Enter 10 numbers \n");
    for(i=0;i<10;i++)
     scanf("%d",&a[i]);
    sum(a);
    return 0;
}
void sum(int a[])
{
    int i=0,j=0,t=0,ss=0,bs=0;
    
    for(i=0;i<10-1;i++)
    {
        for(j=0;j<10-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
            }
        }
    }
    
    for(i=0;i<3;i++)
     ss+=a[i];
    for(i=9;i>6;i--)
     bs+=a[i];

    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("Sum of first three smallest elements is %d \n",ss);
    printf("Sum of first three largest elements is %d \n",bs);
}