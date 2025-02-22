#include<stdio.h>
 void function(ch){
     printf("Receive function from main:%c",ch);
 }
 int main()
          {
           char ch;
           printf("Enter somethiing");
           scanf("%c",&ch);
           function(ch);
          }
