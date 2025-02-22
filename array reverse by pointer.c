#include<stdio.h>
int main(){

int arr[]={2,3,8,9,7,5,6,4};
int *p=&arr[7];
int i;
for(i=0;i<7;i++){
    printf("%d",*(p-i));
}




}
