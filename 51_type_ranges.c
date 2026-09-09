#include <stdio.h>
#include <limits.h>

int main(){
    printf("Signed char: %d to %d\n", SCHAR_MIN, SCHAR_MAX);
    printf("Unsigned char: 0 to %u\n", UCHAR_MAX);

    printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
    printf("Unsigned short: 0 to %u\n", USHRT_MAX);

    printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
    printf("Unsigned int: 0 to %u\n", UINT_MAX);

    printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);
    printf("Unsigned long: 0 to %lu\n", ULONG_MAX);

    return 0;
}
