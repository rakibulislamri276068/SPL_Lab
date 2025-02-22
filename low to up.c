#include<stdio.h>
int main()
{
    char ch[]={'i','l','o','v','e','\0'};
    int i;
    for(i=0;ch[i]!='\0';i++){
        if(ch[i]>='a'&&ch[i]<='z'){
            ch[i]-=32;
            }printf("%c",ch[i]);
    }

}
