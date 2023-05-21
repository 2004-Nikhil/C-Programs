/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
  14. Input a matrix of order m x n. Print the sum of all the odd elements present in each 
      row and all the odd elements present in each column.
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int m,n;
    printf("Enter a the dimentions of matrix \n");
    scanf("%d%d",&m,&n);
    int i=0,j=0,a[100][100],r[100],c[100];
    printf("Enter %d numbers \n",m*n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
         scanf("%d",&a[i][j]);
    }
    for(i=0;i<m;i++)
    {r[i]=0;
     c[j]=0;
        for(j=0;j<n;j++)
        {
            if(a[i][j]%2==1)
             {
                r[i]+=a[i][j];
                c[j]+=a[i][j];
             }
        }
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n");
    printf("Original Matrix\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
         printf("%d",a[i][j]);
        printf("\n");
    }   
    for(i=0;i<m;i++)
     printf("Sum of odd terms in row %d is %d \n",i+1,r[i]);
    for(i=0;i<n;i++)
     printf("Sum of odd terms in column %d is %d \n",i+1,c[i]);
    return 0;
}