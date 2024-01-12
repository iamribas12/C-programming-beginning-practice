// #include <stdio.h>
// int fact(int n){
//    if(n==0||n==1){
//       return 1;
//    }
//    return n*(fact(n-1));
// }
// int main() {
//    int num,temp,sum=0,hola;
//    printf("Enter no.(for checking its krishnamurthy no. or not : )");
//    scanf("%d",&num);
//    hola = num;
//    while(num>0){
//       temp = num%10;
//       sum = sum+fact(temp);
//       num = num/10;
//    }
//    if(hola == sum ){
//       printf("%d is krishnamurthy no",hola);
//    }
//    else{
//       printf("%d is not a krishnamurthy no.",hola);
//    }
   
//    return 0;
// }

// #include<stdio.h>
// #include<conio.h>
// #include<stdlib.h>
// int main(){
//     char months[12][10]={"Jan","Feb","Mar","Apr","May","June","July","Aug","Sep","Oct","Nov","Dec"};
//     int i;
//     printf("ENter the month value : ");
//     scanf("%d",&i);
//     if(i>12||i<1){
//         printf("Invalid!Input entered by User\n Enter any key for exit");
//         getch();
//         exit(0);
//     }
//     if(i !=12){
//         printf("%s then %s",months[i-1],months[i]);
//     }
//     else{
//         printf("%s then %s",months[i-1],months[i]);
//     }
//     return 0;
// }


// #include<stdio.h>
// int swap(int *n,int *m){
//     *n = *n+*m;
//     *m = *n-*m;
//     *n = *n-*m;
//     printf("x = %d,y = %d\n",*n,*m);
// }
// int main(){
//     int x,y;
//     int i=1,num;
//     printf("Enter no. of times you want : ");
//     scanf("%d",&num);
//     while(i<num){
//         printf("Enter x & y : ");
//         scanf("%d%d",&x,&y);
//         swap(&x,&y);
//         printf("x = %d,y = %d\n",x,y);
//         i++;
//     }
//     return 0;
// }

// Write a c Program to check whether a number is krishnamurthy number or not.
// #include <stdio.h>

// int main() {
//     int num, real_Num, rem, sum = 0, fact;
    
//     printf("Enter a number: ");
//     scanf("%d", &num);
    
//     real_Num = num;
    
//     while (num > 0) {
//         rem = num % 10;
//         fact = 1;
        
//         for (int i = 1; i <= rem; i++) {
//             fact *= i;
//         }
        
//         sum += fact;
//         num /= 10;
//     }
    
//     if (sum == real_Num) {
//         printf("%d is a Krishnamurthy number.\n", real_Num);
//     } else {
//         printf("%d is not a Krishnamurthy number.\n", real_Num);
//     }
    
//     return 0;
// }

// Write a c program to print series 1+(1+2)+(1+2+3).....upto nth terms.
// #include <stdio.h>

// int main() {
//     int a, sum = 0;

//     printf("Enter the value of n: ");
//     scanf("%d", &a);

//     for (int i = 1; i <= a; i++) {
//         int sum2 = 0;
//         for (int j = 1; j <= i; j++) {
//             sum2 += j;
//         }
//         sum += sum2;
//     }

//     printf("The sum of the series is: %d\n", sum);

//     return 0;
// }
//write a c program to sum of series 1-2+3-4+5.....upto nth tems.

// #include <stdio.h>

// int main() {
//     int num, sum = 0, sign = 1;

//     printf("Enter the value of n: ");
//     scanf("%d", &num);

//     for (int i = 1; i <= num; i++) {
//         sum += i * sign;
//         sign *= -1; // Changing the sign for alternating addition and subtraction
//     }

//     printf("The sum of this series is: %d\n", sum);

//     return 0;
// }
