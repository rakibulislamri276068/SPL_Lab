#include<stdio.h>
int fun(int n){
if(n==0){
    return 0;
}

else return n+fun(n-4);

}
int main()
{
int a,i;
printf("Enter a number");
scanf("%d",&a);

printf("%d",fun(a));
}

