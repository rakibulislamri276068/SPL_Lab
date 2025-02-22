#include<stdio.h>
int function(int n,int arr[]){
    int i,sum=0;
for(i=0;i<n;i++){
    sum+=arr[i];
}
return sum;

}

int main(){
    int n,arr[100],i;
    printf("Enter a number");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",function(n,arr));


}
