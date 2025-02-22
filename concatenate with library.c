#include<stdio.h>
int main()
{
 char ch[100];
 char ch1[100];
 printf("Enter a string");
 gets(ch);
 printf("Enter another string");
 gets(ch1);
 printf("%s",strcat(ch,ch1));
}
