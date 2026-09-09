#include <stdio.h>

int main(){
    FILE *fp;
    char ch;
    int digit=0, space=0, other=0;

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            space++;
        else
            other++;
    }

    printf("Digits=%d Spaces=%d Others=%d",digit,space,other);

    fclose(fp);
}
