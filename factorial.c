#include<stdio.h>
int main(){
    int n,i,fact=1;
    printf("number:");
    scanf("%d",&n);
    for(i=0;i<=n;i++){
        fact=fact*i;
    }
    printf("factorial=%d",fact);
}