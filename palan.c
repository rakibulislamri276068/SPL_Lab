#include<stdio.h>
int main()
{
    int i,len,flag=1;
    char ch[100];
    printf("Enter a string");
    scanf("%s",&ch);
    len=strlen(ch);
    for(i=0;i<len/2;i++){
        if(ch[i]!=ch[len-1-i]){
            flag=0;
        }
    }
    if(flag) printf(" palendrom");
    else printf("Not Palandrom");
}
