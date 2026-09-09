#include <stdio.h>

int main() {
    char c;
    int blank = 0;
    int tab = 0;
    int newline = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            blank++;
        } else if (c == '\t') {
            tab++;
        } else if (c == '\n') {
            newline++;
        }
    }

    printf("Number of white space characters: %d\n",
           blank + tab + newline);

    printf("Total white space characters = %d + %d + %d = %d\n",
           blank, tab, newline,
           blank + tab + newline);

    return 0;
}
