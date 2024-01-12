// #include<stdio.h>
// int calc(int a,int b,int *prod,int *sum,int *sub){
// *sum = a+b;
// *prod = a*b;
// *sub = a-b;
// }
// int main(){
//     int x,y;
//     printf("Enter x & y : ");
//     scanf("%d%d",&x,&y);
//     int sum,prod,sub;
//     calc(x,y,&prod,&sum,&sub);
//     printf("sum = %d, prod = %d, sub = %d",sum,prod,sub);
//     return 0;
// }
#include<stdio.h>
void printNum(int *arr,int n){
    for(int i=0;i<=n;i++){
        printf("%d\t",arr[i]);
    }
}
int main(){
    int arr[]={1,2,3,4,5,6,4};
    printNum(arr,6);
    return 0;
}