#include<stdio.h>
int main()
{
    char ch[]={'B','A','n','G','L','A','D','E','S','H','\0'};
    printf("%s",ch);
    int n=10,i;
    for(i=0;i<n;i++){
        if(ch[i]>=65 && 95>=ch[i]){
                ch[i]+=32;

        }
    }
    printf("\n%s",ch);
}
