#include<stdio.h>
int main()
{
    char ch[100];
    printf("Enter a string");
    gets(ch);
    int len=strlen(ch);
    printf("%d",len);
}
