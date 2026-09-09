#include <stdio.h>

double my_atof(char s[]) {
    double val = 0.0;
    double power = 1.0;
    int i = 0;
    int sign = 1;

    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    for (; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10 * val + (s[i] - '0');
    }

    if (s[i] == '.') {
        i++;
    }

    for (; s[i] >= '0' && s[i] <= '9'; i++) {
        val = 10 * val + (s[i] - '0');
        power *= 10;
    }

    return sign * val / power;
}

int main() {
    char s[100];

    scanf("%s", s);

    printf("%.6f", my_atof(s));

    return 0;
}
