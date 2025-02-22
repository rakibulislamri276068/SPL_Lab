#include<stdio.h>
int main()
{
    int i,j;
    char ch[100];
    char ch1[100];
    char c;
    printf("Enter a string");
    gets(ch);
    for(i=0,j=strlen(ch)-1;i<j;i++,j--){
        c=ch[i];
        ch[i]=ch[j];
        ch[j]=c;


    }
    for(i=0;ch[i]!='\0';i++){
        printf("%c",ch[i]);
    }


}
