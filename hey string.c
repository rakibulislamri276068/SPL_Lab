#include<stdio.h>
int main()
{
 int i,j;
char ch1[]={'R','A','k','i'};
    char ch2[]={'B','U','L'};
    char ch3[10];
    for(i=0,j=0;i<4;i++,j++){
       ch3[j]=ch1[i];
    }
    for(i=0;i<3;i++,j++){
        ch3[j]=ch2[i];
    }
    ch3[j]='\0';
    printf("%s",ch3);
}
