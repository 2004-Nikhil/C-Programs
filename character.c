/*Name                  :   Nikhil Nawani
  University Roll no    :   2021330
  Section               :   D
  
   11. Input n characters in an array and replace the characters as per the given instructions:
       i Replace all capital vowels with symbol $.
      ii Replace all the capital consonant with symbol #.
     iii Replace all small letter vowels with symbol *.
      iv Replace all the small letter consonant with symbol +.
       v Relace all special symbols with spaces.
      vi Replace all spaces with digit 5.
     vii Replace all digits with @
*/
#include <stdio.h>
int main()
{
    printf("\t\t\t\t\t\t*****INPUT*****\n");
    int n;
    printf("Enter the number of terms \n");
    scanf("%d",&n);
    int i=0;char a[100];
    printf("Enter %d characters \n",n);
    char c = getchar();
    for(i=0;i<n;i++)
    {
        scanf("%c",&a[i]);
        c = getchar();
        if(a[i]>=65 && a[i]<=90)
        {
            if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
             a[i]='$';
            else
             a[i]='#';
        }
        else if(a[i]>=97 && a[i]<=122)
        {
            if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
             a[i]='*';
            else
             a[i]='+';
        }
        else if(a[i]>=48 && a[i]<=57)
         a[i]='@';
        else if(a[i]==32)
         a[i]='5';
        else
         a[i]=32;
    }
    printf("\t\t\t\t\t\t*****OUTPUT*****\n"); 
    for(i=0;i<n;i++)
     printf("%c",a[i]);
    return 0;
}