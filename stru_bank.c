typedef struct customes
{
    char na[50];
    int acc;
    int bal;
}cus;
void l(cus);
void m(cus*);
int main()
{
    cus C[10],*p;
    p=&C;
    int i;
    for(i=0;i<5;i++)
    {
        printf("Enter the name of customer \n");
        scanf("%s",C[i].na);
        getchar();
        printf("Enter the account number of customer \n");
        scanf("%d",&C[i].acc);
        printf("Enter the balance of customer \n");
        scanf("%d",&C[i].bal);
    }
    printf("The Customer with less than 200 balance \n");
    for(i=0;i<5;i++)
        l(C[i]);
    printf("The Customer balance with updated value \n");
    for(i=0;i<5;i++)
        m(p+i);
    return 0;
}
void l(cus C)
{
    if(C.bal<200)
    printf("%s\n",C.na);
}
void m(cus *p)
{
    if(p->bal>1000)
    p->bal=p->bal+100;
    printf("%s has %d in balance\n",p->na,p->bal);
}