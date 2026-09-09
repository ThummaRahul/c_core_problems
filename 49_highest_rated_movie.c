#include <stdio.h>

typedef struct
{
    char title[30];
    char director[30];
    float rating;
} Movie;

typedef Movie* MoviePtr;

int main()
{
    int n,i,max=0;

    scanf("%d",&n);

    Movie m[n];
    MoviePtr p;

    for(i=0;i<n;i++)
    {
        p=&m[i];

        scanf("%s",p->title);
        scanf("%s",p->director);
        scanf("%f",&p->rating);

        if(p->rating>m[max].rating)
            max=i;
    }

    printf("%s %s %.2f",
           m[max].title,
           m[max].director,
           m[max].rating);

    return 0;
}
