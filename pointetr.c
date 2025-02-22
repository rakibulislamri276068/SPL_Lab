#include<stdio.h>
int main()
{
    int array[10]={5,2,3,4,000,6,7,8,9,10};
    int *p=&array[3];
    printf("%d\n",*p);
    printf("%d",array);
}
