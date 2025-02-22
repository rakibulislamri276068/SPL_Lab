#include<stdio.h>
int main()
{
    char ch[]={'r','a','k','i','b'};
    for(int i=0;i<5;i++){
      if('A'<=ch[i] && ch[i]<='Z'){
        ch[i]-=32;

      }
    }
    printf("%s",ch);
}
