#include <stdio.h>

int main(){
    FILE *fp;
    char word[100];
    int count=0;

    fp=fopen("file.txt","r");

    while(fscanf(fp,"%s",word)!=EOF){
        count++;
    }
    printf("Words=%d",count);
    fclose(fp);
}
