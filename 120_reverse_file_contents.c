#include <stdio.h>

int main(){
    FILE *fp;
    long size;
    char ch;

    fp=fopen("file.txt","r");

    fseek(fp,0,SEEK_END);
    size=ftell(fp);

    for(long i=size-1;i>=0;i--){
        fseek(fp,i,SEEK_SET);
        ch=fgetc(fp);
        putchar(ch);
    }

    fclose(fp);
}
