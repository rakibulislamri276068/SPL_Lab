#include<stdio.h>
struct data {
int x;
float y;
};

int main()
{
    float c;
  struct data sum;
  printf("Enter a number");
  scanf("%d",&sum.x);
  printf("Enter another number");
    scanf("%f",&sum.y);
    c=sum.x*sum.y;
    printf("Multiplication is:%f",c);
}
