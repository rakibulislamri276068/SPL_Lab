#include<stdio.h>
int main()
{
    char str1[100];
    char str2[100];
    printf("Enter a string");
    gets(str1);
    printf("Enter sub string");
    getss(str2);
    int flag=0;
    int len1=strlen(str1);
    int len2=strlen(str2);
    for(int i=0;i<len1;i++){
        for(int j=0;j<len2;j++){
            if(str1[i+j]!=str2[j])
                break;
        }
        if(len2==j){
            flag=1;
        break;}

    }
    if(flag) printf("sub");
    else printf("not sub");

}
