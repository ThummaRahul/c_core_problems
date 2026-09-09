#include <stdio.h>

int main(){
    FILE *fp;
    char ch;

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(ch=='\t')
            printf("    ");
        else
            putchar(ch);
    }

    fclose(fp);
}
