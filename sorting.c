#include<stdio.h>
int main()
{
    char ch[100];
    char max;
    printf("Enter a string");
    gets(ch);
    int i;
    ch[0]=max;
    for(i=0;ch[i]!='\0';i++){
         if ((ch[i] >= 'A' && ch[i] <= 'Z') || (ch[i] >= 'a' && ch[i] <= 'z')){
            if(ch[i]>max)
                max=ch[i];
                }
printf("%c",max);
    }
}
