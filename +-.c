#include<stdio.h>
int main()
{
    int i,count=0;
    char ch[100];
    char c;

    printf("Enter a string");
    gets(ch);

    for(i=0;ch[i]!='\0';i++){
        if( isdigit(ch[i])){
            count+=ch[i]-'0';
        }
    }
    printf("summation:%d",count);}
