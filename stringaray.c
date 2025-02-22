#include<stdio.h>
int main(){
int a,b;

printf("Enter two number");
scanf("%d%d",&a,&b);

int *p=&a,*p1=&b;
int temp=*p;
*p=*p1;
*p1=temp;
printf("%d,%d",*p,*p1);
}
