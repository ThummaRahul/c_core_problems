#include <stdio.h>

union Data
{
    float f;
    unsigned char b[4];
};

int main()
{
    union Data d;
    int i;

    scanf("%f",&d.f);

    for(i=0;i<4;i++)
        printf("%02X ",d.b[i]);

    return 0;
}
