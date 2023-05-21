#include <stdio.h>
#include <string.h>

struct book
{
    int acc, flag;
    char auth[20], title[20];
};

int main()
{
    struct book B[20], tt;
    int c = 0, x, i, a, no;
    char author[20], t[20], ch;

    printf("\t\t\t\t\t\t*****INPUT*****\n");

    do
    {
        printf("Press 1 to Display book information\n");
        printf("Press 2 to Add a new book \n");
        printf("Press 3 to Display all books of a particular author \n");
        printf("Press 4 to Display total books of a particular title \n");
        printf("Press 5 to Display total books in the library \n");
        printf("Press 6 to Issue a book \n");
        printf("Press 7 to Exit\n");
        scanf("%d", &x);
        getchar(); // Consume the newline character from the input buffer

        switch (x)
        {
            case 1:
                printf("Enter accession number: ");
                scanf("%d", &a);
                for (i = 0; i < c; i++)
                {
                    if (a == B[i].acc)
                    {
                        printf("Book title: %s", B[i].title);
                        printf("Book author: %s", B[i].auth);
                    }
                }
                break;
            case 2:
                printf("Enter Book title: ");
                fgets(B[c].title, 20, stdin);
                printf("Enter Book author: ");
                fgets(B[c].auth, 20, stdin);
                printf("Enter accession number: ");
                scanf("%d", &B[c].acc);
                B[c].flag = 0;
                c++;
                break;
            case 3:
                printf("Enter author name: ");
                fgets(author, 20, stdin);
                for (i = 0; i < c; i++)
                {
                    if (!strcmp(author, B[i].auth))
                        puts(B[i].title);
                }
                break;
            case 4:
                printf("Enter title: ");
                fgets(t, 20, stdin);
                no = 0;
                for (i = 0; i < c; i++)
                {
                    if (!strcmp(t, B[i].title))
                        no++;
                }
                printf("Books = %d\n", no);
                break;
            case 5:
                printf("Total books = %d\n", c);
                break;
            case 6:
                printf("Enter name of book to be issued: ");
                fgets(t, 20, stdin);
                for (i = 0; i < c; i++)
                {
                    if (!strcmp(t, B[i].title))
                    {
                        B[i].flag = 1;
                        tt = B[i];
                        B[i] = B[c];
                        B[c] = tt;
                    }
                }
                c--;

                printf("The book is issued\n");
                break;
            default:
                break;
        }

        printf("Do you want to continue (Y/N)? ");
        scanf(" %c", &ch);
        getchar(); // Consume the newline character from the input buffer
    } while (ch == 'Y');
    return 0;
}
