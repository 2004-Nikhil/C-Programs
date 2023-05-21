#include <stdio.h>
#include <string.h>
typedef struct date
{
    int yy;
    int mm;
    int dd;
}Da;
typedef struct time
{
    int hh;
    int mm;
    int ss;
}Ti;
typedef struct train
{
    char tna[30];
    char soa[30];
    char sod[30];
    int tno;

    Da D[2];
    Ti T[2];
}Tr;
int main()
{
    Tr T[10];
    int i;
    char sds[30],sas[30],sds2[30],sas2[30];
    for(i=0;i<3;i++)
    {
        printf("Enter the name of train and train number\n");
        scanf("%s",T[i].tna);
        scanf("%d",&T[i].tno);
        printf("Enter the departure and arrival time in Hours minutes seconds\n");
        scanf("%d%d%d",&T[i].T[0].hh,&T[i].T[0].mm,&T[i].T[0].ss);
        scanf("%d%d%d",&T[i].T[1].hh,&T[i].T[1].mm,&T[i].T[1].ss);
        printf("Enter the departure and arrival date in date mount and year\n");
        scanf("%d%d%d",&T[i].D[0].dd,&T[i].D[0].mm,&T[i].D[0].yy);
        scanf("%d%d%d",&T[i].D[1].dd,&T[i].D[1].mm,&T[i].D[1].yy);
        getchar();
        printf("Enter the departure and arrival Station name\n");
        scanf("%s",T[i].sod);
        getchar();
        scanf("%s",T[i].soa);
        getchar();
    }
    printf("Enter the searching departure station\n");
    scanf("%s",sds);
    getchar();
    printf("Enter the searching arrival station\n");
    scanf("%s",sas);
    getchar();
    printf("Enter the searching departure and arrival station\n");
    scanf("%s",sds2);
    getchar();    
    scanf("%s",sas2);
    getchar();
    printf("The name of trains departing from searching station\n");
    for(i=0;i<3;i++)
    {
        if(strcmpi(sds,T[i].sod)==0)
        printf("%s\n",T[i].tna);
    }
    printf("The name of trains arriving to searching station\n");
    for(i=0;i<3;i++)
    {
        if(strcmpi(sas,T[i].soa)==0)
        printf("%s\n",T[i].tna);
    }
    printf("The detail of trains deparing from and arriving to second searching station\n");
    for(i=0;i<3;i++)
    {
        if((strcmpi(sas2,T[i].soa)==0)&&(strcmpi(sds2,T[i].sod)==0))
        {
            printf("The name of train is %s\n",T[i].tna);
            printf("The number of train is %d\n",T[i].tno);
            printf("The Departure time of train is %d Hours %d minutes %d seconds\n",T[i].T[0].hh,T[i].T[0].mm,T[i].T[0].ss);
            printf("The arrival time of train is %d Hours %d minutes %d seconds\n",T[i].T[1].hh,T[i].T[1].mm,T[i].T[1].ss);
            printf("The Departure date of train is %d/%d/%d\n",T[i].D[0].dd,T[i].D[0].mm,T[i].D[0].yy);
            printf("The arrival date of train is %d/%d/%d\n",T[i].D[1].dd,T[i].D[1].mm,T[i].D[1].yy);
            printf("\n\n\n %s %s %s %s %s",T[i].sod,T[i].soa,sds,sas,sds2,sas2);
        }
    }
    return 0;
}