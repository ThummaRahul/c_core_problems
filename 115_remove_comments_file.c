#include <stdio.h>

int main(){
    FILE *fp;
    char ch;

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(ch=='/'){
            if((ch=fgetc(fp))=='/'){
                while((ch=fgetc(fp))!='\n');
            }
        }
        putchar(ch);
    }
    fclose(fp);
}
