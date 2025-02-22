#include<stdio.h>
int main(){
int array[10] = {5, 2, 3, 9, 10, 9, 7, 5, 4, 6};
int *p = &array[1];

p--;
printf("%d\n", *p);

}

