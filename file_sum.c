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
    f2=fopen("file2.txt","w");
    while(fscanf(f1,"%d",&num)==1)
    {
        int t=num;
        int sum=0;
        while(t>0)
        {
            sum+=t%10;
            t/=10;
        }
        fprintf(f2,"%d \n",sum);
    }
    fclose(f1);
    fclose(f2);
    f2=fopen("file2.txt","r");
    
    while(fscanf(f1,"%d",&num)==1)
    {
        printf("%d\n",num);
    }
}