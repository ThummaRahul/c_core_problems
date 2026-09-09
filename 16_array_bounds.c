#include <stdio.h>

int main()
{
    int a[5]={10,20,30,40,50};
    int index;

    printf("Enter index: ");
    scanf("%d",&index);

    if(index>=0 && index<5)
        printf("Element = %d",a[index]);
    else
        printf("Array Index Out Of Bound");

    return 0;
}
