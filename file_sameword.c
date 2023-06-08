#include <stdio.h>
#include <string.h>

int main()
{
    FILE *f;
    char ch, st[100], se[100];
    int i = 0, fr = 0;

    printf("Enter the sentence:\n");
    f = fopen("text.txt", "w");
    while ((ch = getchar()) != EOF)
    {
        fputc(ch, f);
    }
    fputc(' ', f);
    fclose(f);

    printf("Enter the searching word:\n");
    gets(se);

    f = fopen("text.txt", "r");
    while ((ch = getc(f)) != EOF)
    {
        st[i++] = ch;
        if (ch == 32)
        {
            st[i] = '\0';
            i = 0;
            if (strcmp(st, se) == 0)
                fr++;
        }
    }

    if (fr)
        printf("Word found and frequency is %d\n", fr);
    else
        printf("Word not found\n");

    fclose(f);
    return 0;
}