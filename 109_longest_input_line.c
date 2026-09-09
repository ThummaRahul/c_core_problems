#include <stdio.h>
#include <string.h>

int main(){
    char str[200];
    int max=0;

    while(fgets(str,200,stdin)){
        int len=strlen(str);
        if(len>max)
            max=len;
    }

    printf("Longest length = %d",max);
}
