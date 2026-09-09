#include <stdio.h>

union Data
{
    char *str;
    int *arr;
};

int main()
{
    union Data d;

    char s[]="Embedded";
    int a[]={10,20,30,40,50};

    d.str=s;
    printf("String : %s\n",d.str);

    d.arr=a;

    printf("Array : ");

    for(int i=0;i<5;i++)
        printf("%d ",d.arr[i]);

    return 0;
}
