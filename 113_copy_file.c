#include <stdio.h>

int main(){
    FILE *f1,*f2;
    char ch;

    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","w");

    while((ch=fgetc(f1))!=EOF){
        fputc(ch,f2);
    }
    fclose(f1);
    fclose(f2);
}
