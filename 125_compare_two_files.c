#include <stdio.h>

int main(){
    FILE *f1,*f2;
    char ch1,ch2;

    f1=fopen("file1.txt","r");
    f2=fopen("file2.txt","r");

    do{
        ch1=fgetc(f1);
        ch2=fgetc(f2);

        if(ch1!=ch2){
            printf("Files are different");
            return 0;
        }

    }while(ch1!=EOF && ch2!=EOF);

    printf("Files are identical");

    fclose(f1);
    fclose(f2);
}
