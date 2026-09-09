#include <stdio.h>

int main(){
    FILE *fp;
    int freq[256]={0};
    char ch;

    fp=fopen("file.txt","r");

    while((ch=fgetc(fp))!=EOF){
        freq[ch]++;
    }

    for(int i=0;i<256;i++){
        if(freq[i]!=0){
            printf("%c = %d\n",i,freq[i]);
        }
    }
    fclose(fp);
}
