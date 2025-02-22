#include<stdio.h>
int fun(int n){
    if(n==0){
        return 0;
    }
    else {return 4*(n-1)+fun(n-1);}
}



int main()
{
 int a,x;
 printf("Enter a number");
 scanf("%d",&a);
  x=fun(a);
  printf("%d",x);
}
