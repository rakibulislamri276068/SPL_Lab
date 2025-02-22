#include<stdio.h>

int co(int num){
    if(num==0){
        return 0;}
        else {
            return 10+co(num/10);
        }
    }
int main()
{
    int number;
    scanf("%d",&number);
    printf("%d",co(number));
}

