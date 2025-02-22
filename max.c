#include<stdio.h>
int fun(int a,int arr[]){
int i,max;
max=arr[0];
for(i=0;i<a;i++){
    if(arr[i]<max)
        max=arr[i];
}
    return max;}


int main(){
int n,arr[10],i;
printf("How many number you enter");
scanf("%d",&n);
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
int x=fun(n,arr);
printf("min is :%d",x);
}
