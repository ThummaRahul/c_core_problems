#include <stdio.h>

int main() {
    FILE *fp;
    char ch, prev=' ';

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(!(ch==' ' && prev==' '))
            putchar(ch);
        prev=ch;
    }

    fclose(fp);
}
