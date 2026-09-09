#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char word[100], old[50], neww[50];

    printf("Old word: ");
    scanf("%s",old);

    printf("New word: ");
    scanf("%s",neww);

    fp=fopen("file.txt","r");

    while(fscanf(fp,"%s",word)!=EOF){
        if(strcmp(word,old)==0)
            printf("%s ",neww);
        else
            printf("%s ",word);
    }

    fclose(fp);
}
