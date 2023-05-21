/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  15. Input a matrix of order m x n and print the square of elements in principal diagonal 
      and cubes of secondary diagonal.
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int m,n;
    printf("Enter a the dimentions of matrix \n");
    scanf("%d%d",&m,&n);
    int i=0,j=0,a[100][100];
    if(m==n)
    {
        printf("Enter %d numbers \n",m*n);
            for(i=0;i<m;i++)
            {
                for(j=0;j<n;j++)
                  scanf("%d",&a[i][j]);
            }
        printf("\t\t\t\t\t\t*****OUTPUT*****\n");
        printf("Original Matrix\n");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
             printf("%d",a[i][j]);
            printf("\n");
        }
        printf("Squares of principal diagonal \n");
        for(i=0;i<m;i++)
        printf("%d\n",a[i][i]*a[i][i]);
        printf("Cubes of secondary diagonal \n");
        for(i=0,j=n-1;i<m;i++,j--)
        printf("%d\n",a[i][j]*a[i][j]*a[i][j]);
    }
    else
     printf("This is not a square Matrix");
    return 0;
}