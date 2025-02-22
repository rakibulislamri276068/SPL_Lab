#include<stdio.h>
void ch(char str[]){
    int len,i,flag=1;
len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i])
        flag=0;
        break;

    }
    if(flag) printf("pal");
    else printf("not pal");}
    int main()
{
    int i,len,flag=1;
    char str[100];
    printf("Enter a string");
    gets(str);
    ch(str);}
