#include<stdio.h>
int main()
{
    int i,count=0;
    char ch[100];
    char c;

    printf("Enter a string");
    gets(ch);
    printf("Enter a character");
    scanf("%c",&c);
    for(i=0;ch[i]!='\0';i++){
        if(toupper(ch[i])==toupper(c)){
            count++;}


    }
     printf("%d",count);


}
