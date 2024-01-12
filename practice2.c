// #include<stdio.h>
// void doWork(int a, int b, int *sum, int *prod, int *avg){
//     *sum = a+b;
//     *prod = a*b;
//     *avg = (a+b)/2;
// }
// int main(){
//     int a = 3, b = 4;
//     int sum,prod, avg;
//     doWork(a,b,&sum,&prod,&avg);
//     printf("Sum = %d, prod = %d, avg = %d",sum,prod,avg);
//     return 0;
// }
// #include<stdio.h>
// int interchange(int a,int b){
//     int z =a;
//     a =b;
//     b =z;
//     printf("a = %d, b= %d",a,b);
// }
// int main(){
//     int a,b;
//     printf("enter two numbers for interchange : ");
//     scanf("%d%d",&a,&b);
//     interchange(a,b);
//     return 0;
// }
// #include<stdio.h>
// void arrayFunc(int arr[],int n){
//     int sum = 0;
//     for(int i = 0; i<n; i++){
//         printf("%d\n",arr[i]);
//         sum  = sum + arr[i];
//         }
//         printf("Total sum : %d",sum);
// }
// int main(){
//     int doc[4] = {54,54,23,23};
//     arrayFunc(doc,4);
// return 0;
// }

// #include<stdio.h>
// int main(){
//     int var[] = {200,300,400};
//     int *ptr = &var;
//     for(int i=0;i<3;i++){
//         printf("Address of var[%d] : %d\n",i,ptr);
//         printf("Value of var[%d] : %d\n",i,*ptr);

//     ptr++;
//     }
//     return 0;

// }

/////////////////////////////////// Array of Pointers //////////////////////////////////////
// #include<stdio.h>
// int main(){
//     int var[] = {23,35,54};
//     for(int i=0;i<3;i++){
//         printf("%d\n",var[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// const int max = 4;
// int main(){
//     int var[] = {12,13,14,15};
//     int *ptr[max];

//     for(int i=0;i<max;i++){
//         ptr[i]= &var[i];
//     }
//     for(int i=0;i<max;i++){
//         printf("The value of var[%d] : %d\n",i,ptr[i]);
//     }
//     return 0;
// }

// #include<stdio.h>
// const int max=4;
// int main(){
//     char *names[] = {"sabir Alam","Jawed Alam","arman Alam"};
//     for(int i=0;i<max;i++){
//         printf("Name[%d] : %s\n",i,names[i]);
//     }
//     return 0;

// }

// #include <stdio.h>

// int main() {
//     // char doc[5]={'a','b','c','d','e'};
//     // for(int i=0;i<4;i++){
//     //     printf("%c\n",doc[i]);
//     //     if(doc[i]=='d'){
//     //         continue;
//     //     }
//     // }
//     int i,age;
//     for(i=0;i<10;i++){
//         printf("%d\n Enter even no.(not odd) : ",i);
//         scanf("%d",&age);
//         if((age%2)==1){
//             printf("you're breaking now");
//             break;
//         }
//     }

//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     float marks[3];
//     printf("Enter price1,price2,price3 : ");
//     scanf("%f%f%f", &marks[0],&marks[1],&marks[2]);
//     printf("price1 = %.1f\n",(marks[0]+(0.18*marks[0])));
//     printf("price2 = %.1f\n",(marks[1]+(0.18*marks[1])));
//     printf("price3 = %.1f\n",(marks[2]+(0.18*marks[2])));

//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int aadhaar[5];
//     int *pter = &aadhaar[0];
//     for(int i = 0;i<5;i++){
//         printf("Enter aahaar no%d : ",i);
//         scanf("%d",(pter+i));
//     }
//     for(int i=0;i<5;i++){
//     printf("Aadhaar of no%d : %d\n",i,*(pter+i));
//     }
//     return 0;
// }
// #include<stdio.h>
// int countd(int arr[],int n){
//     int count =0;
//     for(int i=0;i<=n;i++){
//         if(arr[i]%2 == 1){
//             count = count + 1;
//         }
//     }
//     printf("%d",count);
// }
// int main(){
//     int arr[4]= {2,3,5,6};
//     countd(arr,4);
//     return 0;
// }

#include<stdio.h>
int rev(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int first = arr[i];
        int second = arr[n-i-1];
        arr[i]=second;
        arr[n-i-1]=first;
    }
}
int printff(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("index%d : %d\n",i,arr[i]);
    }
}
int main(){
    int num[]= {1,2,3,4,5,6};
    rev(num,6);
    printff(num,6);
    return 0;
}