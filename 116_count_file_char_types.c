#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    FILE *fp;
    char ch;
    int v=0,c=0,d=0,s=0;

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(isdigit(ch)) d++;
        else if(isalpha(ch)){
            if(strchr("aeiouAEIOU",ch)){
		    v++;
	    } 
	    else{ 
		    c++;
	    }
        }
        else s++;
    }

    printf("Vowels=%d Consonants=%d Digits=%d Special=%d",v,c,d,s);

    fclose(fp);
}
