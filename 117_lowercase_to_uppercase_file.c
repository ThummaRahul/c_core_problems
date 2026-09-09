#include <stdio.h>
#include <ctype.h>

int main(){
    FILE *f1,*f2;
    char ch;

    f1=fopen("file.txt","r");
    f2=fopen("out.txt","w");

    while((ch=fgetc(f1))!=EOF)
        fputc(toupper(ch),f2);

    fclose(f1);
    fclose(f2);
}
