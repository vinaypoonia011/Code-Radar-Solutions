#include<stdio.h>
int main(){
    int a,b;
    printf("enter a number a: ",a);
    scanf("%d",&a);
    printf("enter a number b: ",b);
    scanf("%d",&b);
    if(a<<b){
        printf("b is greater than a");
    }
    else{
        printf("a is greater than b")
    }
    return 0;
}