#include<stdio.h>
int main()
{
    int i,len,flag=1;
    char str[100];
    printf("Enter a string");
    gets(str);
    len=strlen(str);
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i])
        flag=0;

    }
    if(flag) printf("pal");
    else printf("not pal");
}
