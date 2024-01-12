#include<stdio.h>
//finding the factorial by using recursion function.
int fact(int n);
int main(){
    int d;
    printf("enter number n for factorial : ");
    scanf("%d",&d);
    printf("%d",fact(d));
    return 0;
}
int fact(int n){
    if(n == 1){
        return 1;
    }
    int dot =fact(n-1);
    int do2 = dot *n;
    return do2;
}
