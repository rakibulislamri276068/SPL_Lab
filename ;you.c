#include<stdio.h>
int main()
{
    char ch[100];
    printf("Enter a string");
    gets(ch);
    int n,i;
    i=strlen(ch);
    printf("Enter index number");
    scanf("%d",&n);
    if(n<i) printf("%c",ch[n-1]);
    else printf("Not found");

}
