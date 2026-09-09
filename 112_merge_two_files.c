#include <stdio.h>

int main(){
    FILE *f1,*f2,*f3;
    char ch;

    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");
    f3=fopen("file3.txt","w");

    while((ch=fgetc(f1))!=EOF){
        fputc(ch,f3);
    }
    while((ch=fgetc(f2))!=EOF){
        fputc(ch,f3);
    }
    fclose(f1);
    fclose(f2);
    fclose(f3);
}
