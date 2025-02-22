#include<stdio.h>
int main()
{
    char ch[100];
    printf("Enter a string");
    gets(ch);
    printf("%s",strrev(ch));
}
