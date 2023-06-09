#include <stdio.h>
int main()
{
    FILE *f1,*fe,*fo,*fp;
    int i,j,n,num;
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
    fe=fopen("file2.txt","w");
    fo=fopen("file3.txt","w");
    fp=fopen("file4.txt","w");
    while(fscanf(f1,"%d",&num)==1)
    {
        if(num%2==0)
        fprintf(fe,"%d\n",num);
        else
        fprintf(fo,"%d\n",num);
        int fr=0;
        for(i=2;i<num;i++)
        {
            if(num%i==0)
                fr=1;
        }
        if(!fr)
        fprintf(fp,"%d\n",num);
    }
    fclose(f1);
    fclose(fo);
    fclose(fe);
    fclose(fp);
    fe=fopen("file2.txt","r");
    fo=fopen("file3.txt","r");
    fp=fopen("file4.txt","r");
    printf("Even numbers\n");
    while(fscanf(fe,"%d",&num)==1)
    {
        printf("%d\n",num);
    }
    printf("Odd numbers\n");
    while(fscanf(fo,"%d",&num)==1)
    {
        printf("%d\n",num);
    }
    printf("Prime numbers\n");
    while(fscanf(fp,"%d",&num)==1)
    {
        printf("%d\n",num);
    }
}