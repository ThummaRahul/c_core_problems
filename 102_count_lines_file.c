#include <stdio.h>

int main() {
    FILE *fp;
    char ch;
    int lines = 0;

    fp = fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(ch=='\n'){
            lines++;
        }
    }
    printf("Total lines = %d",lines);

    fclose(fp);
}
