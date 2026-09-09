#include <stdio.h>

struct Book
{
    char title[50];
    char author[50];
    float price;
};

int main()
{
    int n,i,max=0;

    scanf("%d",&n);

    struct Book b[n];

    for(i=0;i<n;i++)
    {
        scanf("%s",b[i].title);
        scanf("%s",b[i].author);
        scanf("%f",&b[i].price);

        if(b[i].price>b[max].price)
            max=i;
    }

    printf("\nMost Expensive Book:\n");

    printf("%s %s %.2f",
           b[max].title,
           b[max].author,
           b[max].price);

    return 0;
}
