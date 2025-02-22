#include<stdio.h>
int function(char ch[]){
    int length=0;
    for( int i=1;ch[i]!='\0';i++){
        length++;
    }
    return length;
}



int main()
{
        char ch[100];

    int length;
    while(1==scanf("%s",ch)){
        length=function(ch);
        printf("%d",length);
    }
}
