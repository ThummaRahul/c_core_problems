#include <stdio.h>
#include <string.h>

int main(){
    char str[500];

    while(fgets(str,500,stdin)){
        if(strlen(str)>80){
            printf("%s",str);
        }
    }
}
