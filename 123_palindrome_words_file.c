#include <stdio.h>
#include <string.h>

int palindrome(char s[]){
    int i=0,j=strlen(s)-1;

    while(i<j){
        if(s[i]!=s[j])
            return 0;
        i++; j--;
    }
    return 1;
}

int main(){
    FILE *fp;
    char word[100];

    fp=fopen("file.txt","r");

    while(fscanf(fp,"%s",word)!=EOF)
        if(palindrome(word))
            printf("%s ",word);

    fclose(fp);
}
