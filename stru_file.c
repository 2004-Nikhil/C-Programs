#include <stdio.h>
#include <stdlib.h>
typedef struct student
{
    char na[50],sa[50];
    int age,roll;
}St;
int main()
{
    FILE *f1;
    St *S;
    int i,n;
    printf("Enter a number of students\n");
    scanf("%d",&n);
    getchar();
    S=(St*)malloc(n*sizeof(St));
    for(i=0;i<n;i++)
    {
        printf("Enter the name,roll no,age and sport\n");
        scanf("%s",S->na);
        scanf("%d",&S->roll);
        scanf("%d",&S->age);
        scanf("%s",S->sa);
    }
    f1 = fopen("file.txt", "w");
    fwrite(S,sizeof(S),n,f1);
    fclose(f1);
    f1=fopen("file.txt", "r");
    fread(S,sizeof(S),n,f1);
    printf("%s",S);
}