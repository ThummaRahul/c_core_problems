#include <stdio.h>
#include <ctype.h>

double atof_extended(char s[]) {
    double val = 0.0;
    double power = 1.0;
    int i = 0;
    int sign = 1;
    int exp = 0;
    int esign = 1;

    while (s[i] == ' ' || s[i] == '\t') {
        i++;
    }

    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (isdigit(s[i])) {
        val = val * 10 + (s[i] - '0');
        i++;
    }

    if (s[i] == '.') {
        i++;
    }

    while (isdigit(s[i])) {
        val = val * 10 + (s[i] - '0');
        power *= 10;
        i++;
    }

    val = sign * val / power;

    if (s[i] == 'e' || s[i] == 'E') {
        i++;

        if (s[i] == '-') {
            esign = -1;
            i++;
        } else if (s[i] == '+') {
            i++;
        }

        while (isdigit(s[i])) {
            exp = exp * 10 + (s[i] - '0');
            i++;
        }
    }

    while (exp > 0) {
        if (esign == 1) {
            val *= 10;
        } else {
            val /= 10;
        }

        exp--;
    }

    return val;
}

int main() {
    char s[100];

    fgets(s, sizeof(s), stdin);

    printf("%.6f", atof_extended(s));

    return 0;
}
