#include<stdio.h>
int main()
{
    int i,count=0,word;
    char ch[100];
    printf("Enter a string");
    gets(ch);
    for(i=0;ch[i]!='\0';i++){
        if(toupper(ch[i])=='A'||
           toupper(ch[i])=='E'||
           toupper(ch[i])=='I'||
           toupper(ch[i])=='O'||
           toupper(ch[i])=='U'
        )
        count++;

        if(ch[i]==' ')
            word++;
    }
    printf("Vowel number is:%d",count);
    printf("\n Word number is :%d",word);
}
