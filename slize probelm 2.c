#include<stdio.h>
int main()
{
    int a[]={4,5,6,8,9,7,2,3,1};
    int *p=&a[8];
    for(int i=0;i<9;i++){

        printf("%d,",*p);
        p--;
    }
}
