#include<stdio.h>
float pi=3.14;
void rakib(){
    pi=3;
    return pi;
}

int main()
{

 printf("%f",pi);
 rakib();
 printf("%f",pi);
}
