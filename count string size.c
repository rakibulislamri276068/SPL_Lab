#include<stdio.h>
int main()
{
    char ch[100];
    int i,count=0;
    printf("Enter a string");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
        count++;
    }
    printf("%d",count);
}
