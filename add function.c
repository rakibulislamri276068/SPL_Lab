#include<stdio.h>
float fun(float a,float b);

int main()
{
  float m,n;
  printf("Enter two number");
  scanf("%f%f",&m,&n);
  float sum=fun(m,n);
  printf("Summation is:%.3f",sum);
}
float fun(float a,float b){
    float c=a+b;
    return c;

}
