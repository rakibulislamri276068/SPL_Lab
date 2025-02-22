#include<stdio.h>
int num(x,y){
    int i ,sqr=1;
    for(i=1;i<=y;i++){
      sqr*=x ;
    }
    return sqr;}


int main()
{
    int x,y,sum;
    printf("Enter two number");
    scanf("%d%d",&x,&y);
    sum=num(x,y);
    printf("%d",sum);
}
