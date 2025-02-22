#include<stdio.h>
int main(){

int a[]={5,4,3,5,4,3};
int *p=&a[5];
for(int i=0;i<6;i++){

    printf("%d,",*(p-i));


}

}
