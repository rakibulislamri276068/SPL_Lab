#include<stdio.h>
int main()
{
    FILE *file;
    file = ("test.txt","w");
    if(file = NULL){
        printf("File does not exists");}
        else {
            printf("File is open");
        }
    }

