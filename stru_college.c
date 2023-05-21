typedef struct date
{
    int yy;
    int mm;
    int dd;
}Dat;
typedef struct student
{
    char na[50];
    Dat D[2];
}St;
int main()
{
    St S[10];
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of Students  \n");
        scanf("%s",S[i].na);
        getchar();
        printf("Date of birth of student \n");
        scanf("%d%d%d",&S[i].D[0].dd,&S[i].D[0].mm,&S[i].D[0].yy);
        printf("Date of addmission of student \n");
        scanf("%d%d%d",&S[i].D[1].dd,&S[i].D[1].mm,&S[i].D[1].yy);
    }
    for(i=0;i<5;i++)
    {
        printf("The Students Detail \n");
        printf("The name of Students %s \n",S[i].na);
        printf("Date of birth of student %d %d %d \n",S[i].D[0].dd,S[i].D[0].mm,S[i].D[0].yy);
        printf("Date of addmission of student %d %d %d \n",S[i].D[1].dd,S[i].D[1].mm,S[i].D[1].yy);
    }
    return 0;
}