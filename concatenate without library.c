#include<stdio.h>
int main()
{
    char ch[100];
    char ch1[100];
    char ch2[100];
    int i,j;
    printf("Enter str 1:");
    gets(ch);
    printf("Enter str 2:");
    gets(ch1);
    for(i=0,j=0;ch[i]!='\0';i++,j++)
        ch2[j]=ch[i];
        for(i=0;ch1[i]!='\0';i++,j++)
            ch2[j]=ch1[i];
            ch2[j]='\0';
        printf("%s",ch2);
}
