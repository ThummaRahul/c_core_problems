#include <stdio.h>

typedef int (*op)(int,int);

int add(int a,int b)
{
    return a+b;
}

int sub(int a,int b)
{
    return a-b;
}

int mul(int a,int b)
{
    return a*b;
}

int divi(int a,int b)
{
    return a/b;
}

int main()
{
    int a,b,ch;
    op f;

    scanf("%d%d%d",&a,&b,&ch);

    switch(ch)
    {
        case 1: f=add; break;
        case 2: f=sub; break;
        case 3: f=mul; break;
        case 4: f=divi; break;
        default: return 0;
    }

    printf("%d",f(a,b));

    return 0;
}
