#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d,&a,&b");
    if(a>b)
    printf("%d is larger\n",a);
    else if (b>a)
    printf("%d is greater \n",b);
    else printf("equal\n");
    return 0;
}