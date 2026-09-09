#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char word[100], target[100];
    int count=0;

    printf("Enter word: ");
    scanf("%s",target);

    fp=fopen("file.txt","r");

    while(fscanf(fp,"%s",word)!=EOF){
        if(strcmp(word,target)==0){
            count++;
        }
    }
    printf("Occurrences=%d",count);

    fclose(fp);
}
