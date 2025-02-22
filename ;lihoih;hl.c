#include<stdio.h>

struct point{
    int x;
    int y;
};
int fun(int a,int b){
return a*b;

}
int main(){
    struct point number;
    printf("Enter a number");
    scanf("%d",&number.x);
    printf("Enter 2nd number");
    scanf("%d",&number.y);
    printf("%d",fun(number.x,number.y));


}
