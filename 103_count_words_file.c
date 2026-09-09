#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    int words=0;

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(ch==' ' || ch=='\n' || ch=='\t'){
            words++;
        }
    }
    printf("Total words = %d",words+1);

    fclose(fp);
}
