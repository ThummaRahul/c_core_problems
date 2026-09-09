#include <stdio.h>
#include <string.h>

int main(){
    FILE *fp;
    char line[200],key[50];

    printf("Enter keyword: ");
    scanf("%s",key);

    fp=fopen("file.txt","r");

    while(fgets(line,200,fp)){
        if(strstr(line,key))
            printf("%s",line);
    }

    fclose(fp);
}
