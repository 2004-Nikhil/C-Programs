#include <stdio.h>
typedef struct Complex 
{
    float re;
    float im;
}Com;
void add(Com num1, Com num2) 
{
    Com sum;
    sum.re = num1.re + num2.re;
    sum.im = num1.im + num2.im;
    printf("Sum = %f + %fi\n", sum.re, sum.im);
}
int main() 
{
    Com num1, num2;
    printf("Enter the real and imaginary parts of the first complex number:\n");
    scanf("%f%f", &num1.re, &num1.im);
    printf("Enter the real and imaginary parts of the second complex number:\n");
    scanf("%f%f", &num2.re, &num2.im);
    add(num1, num2);
    return 0;
}