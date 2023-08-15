// Welcome to EXPLORER's IDE

#include <stdio.h>
#include <math.h>
#include <string.h>
struct book
{
    char title[100];
    char author[50];
    int year;
};
int main()
{
    struct book b[5];
    int check;
    char c;
    for (int i = 0; i < 5; i++)
    {
        printf("\n\nEnter Details of %d Book:",i+1);
        printf("\n\tBook's Name:");
        fgets(b[i].title, sizeof(b[i].title), stdin);
        b[i].title[strcspn((b[i].title), "\n")] = '\0';
        printf("\n\tAuthor's Name:");
        fgets(b[i].author, sizeof(b[i].author), stdin);
        b[i].author[strcspn((b[i].author), "\n")] = '\0';
        printf("\n\tYear of Publication:");
        scanf("%d", &b[i].year);
        getchar();
    }

    printf("\nEnter year to check:\n\t");
    printf("\n\n");
    scanf("%d", &check);
    for (int i = 0; i < 5; i++)
    {
        if (check <= b[i].year)
        {
            printf("\t%s\n\t%s\n\n", b[i].title, b[i].author);
        }
    }
    return 0;
 }
