#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char word[100],longest[100];
    int max=0;

    fp=fopen("file.txt","r");

    while(fscanf(fp,"%s",word)!=EOF){
        if(strlen(word)>max){
            max=strlen(word);
            strcpy(longest,word);
        }
    }

    printf("Longest word = %s",longest);

    fclose(fp);
}
