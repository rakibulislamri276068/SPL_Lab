#include<stdio.h>
int main()
{
    char ch[100];
    int i,flag=1;
    printf("Enter a string");
    scanf("%s",ch);
    int len=strlen(ch);
    printf("string length is:%d\n",len);
    for(i=0;i<len/2;i++){
        if(ch[i]!=ch[len-1-i])
            flag=0;
    }
    if(flag) printf("pall");
    else printf("NOt pal");
}
