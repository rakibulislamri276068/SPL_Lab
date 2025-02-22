#include<stdio.h>
int fact(int m){
    if(m==1){ return 1;}
    else {return m*fact(m-1);}}
int main()


{
    int a;
    printf("Enter a number");
    scanf("%d",&a);
    printf("fact is :%d",fact(a));
}
