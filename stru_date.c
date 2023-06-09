#include <stdio.h>
typedef struct time
{
    int yy,mm,dd;
}ti;
int main()
{
    ti T[3];
    printf("Enter the  date 1 in day month and year\n");
    scanf("%d%d%d",&T[0].dd,&T[0].mm,&T[0].yy);
    printf("Enter the  date 2 in day month and year\n");
    scanf("%d%d%d",&T[1].dd,&T[1].mm,&T[1].yy);
    if(T[1].dd<T[0].dd)
    {
        T[1].dd+=30;
        T[1].mm-=1;
    }
    if(T[1].mm<T[0].mm)
    {
        T[1].mm+=12;
        T[1].yy-=1;
    }
    T[2].yy=T[1].yy-T[0].yy;
    T[2].mm=T[1].mm-T[0].mm;
    T[2].dd=T[1].dd-T[0].dd;
    printf("%d days %d month %d Year\n",T[2].dd,T[2].mm,T[2].yy);
}