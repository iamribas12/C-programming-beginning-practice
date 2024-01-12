// #include <stdio.h>
// int calcMark(int a,int b,int c);
// int main(){
//     int n,o,p;
//     printf("Enter Maths Science Arabic number : ");
//     scanf("%d%d%d",&n,&o,&p);
//     printf("%d",calcMark(n,o,p));
//     return 0;
// }
// int calcMark(int a,int b, int c){
//     int dic = a+b+c;
// 
    // return dic/3;
// }

// #include <stdio.h>
// int fib(int n);
// int main()
// {
//     int ab;
//     printf("Enter n : ");
//     scanf("%d", &ab);
//     printf("%d",fib(ab));
//     return 0;
// }
// int fib(int n)
// {
//     if (n == 0)
//     {
//         return 0;
//     }
//     if (n == 1)
//     {
//         return 1;
//     }

//     int num = fib(n - 1);
//     int num2 = fib(n - 2);
//     int dot = num + num2;
//     // printf("fib of %d is %d\n", n, dot);
//     return dot;
// }
// #include<stdio.h>
// int sumNum(int n);
// int main(){
// printf("%d",sumNum(5));
//     return 0;
// }
// int sumNum(int n){
//     if(n == 1){
//         return 1;
//     }
//     int docke = sumNum(n-1);
//     return ((n+1)*docke);
// }

// #include<stdio.h>
// int sumNum(int n){
//     if(n == 1){
//         return 1;
//     }else if(n == 0){
//         return 0;
//     }else{
//         int doc = sumNum(n-1);
//         return doc + n;
//     }
// }
// int main(){
//     int num;
//     printf("Enter Number to sum \n");
//     scanf("%d",&num);
//     printf("%d",sumNum(num));
//     return 0;
// }

#include<stdio.h>
void swap(int a,int b);
void _swap(int* a,int* b);
int main(){
    int t=3,y=5;
    swap(t,y);
    printf("%d\t%d\n",t,y);
    _swap(&t,&y);
    printf("%d\t%d\n",t,y);
    return 0;
}
void swap(int a,int b){
    int t;
    t = a;
    a = b;
    b = t;
    printf("%d\t%d\n",a,b);

}
void _swap(int* a,int* b){
    int t = *a;
    *a = *b;
    *b = t;
    printf("%d\t%d\n",*a,*b);
}

