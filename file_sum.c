#include <stdio.h>
int main()
{
    FILE *f1,*f2;
    int i,n,num;
    f1=fopen("file1.txt","w");
    printf("Enter the number of terms\n");
    scanf("%d",&n);
    printf("Enter the numbers\n");
    for (i=0;i<n;i++)
    {
        scanf("%d",&num);
        fprintf(f1,"%d\n",num);
    }
    fclose(f1);
    f1=fopen("file1.txt","r");
    f2=fopen("file1.txt","w");
    
}