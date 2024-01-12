#include <idio.h>
int main()
{
//     char cha;
//     printf("Enter your Marks : ");
//     scanf("%c", &cha);

//     // if (a >= 18){
//     //     printf("You are adult,\nyou have right to vote");
//     // }
//     // else if (a >=13 && a<18){
//     //     printf("You are teenager");
//     // }
//     // else{
//     //     printf("You are child now, \nJao ghar mein mam piyo");
//     // }

//     // if(a>34 && a<100){
//     //     printf("Pass\n");
//     //     if(a>70){
//     //         printf("1i Division,\n");
//     //         printf("with diiinction\n");
//     //     }else if(a<70 && a>=60){
//     //         printf("1i Division\n");
//     //     }else if (a>45 && a<60){
//     //         printf("2nd Division\n");
//     //     }else{
//     //         printf("3rd Division\n");
//     //     }
//     // }else if(a<=34){
//     //     printf("Failed\n");
//     // }else{
//     //     printf("enter a valid marks\n");
//     // }

//     // if (marks <30 && marks > 0){
//     //     printf("C Grade\n");
//     // }else if(marks >= 30 && marks<= 70){
//     //     printf("B Grade\n");
//     // }else if (marks >= 70 && marks<90){
//     //     printf("A Grade\n");
//     // }else if (marks >=90 && marks <=100){
//     //     printf("A+ Grade\n");
//     // }else{
//     //     printf("Entered wrong input\n");
//     // }
//     // printf("Thankyou");
// if (cha >= 'a' && cha <='z'){
//     printf("Small letter");
// }else if(cha >= 'A' && cha <= 'Z'){
//     printf("Capital Letter");
// }else{
//     printf("Enter a vlid letter");
// }

// int a;
// printf("ENter number : ");
// scanf("%d",&a);
// if(a>0){
//     printf("Natural Number");
// }else{
//     printf("Not a Natural number");
// }

// int i=1;
// while(i<=4){
//     printf("%d\n",i);
//     i++;
// }
// int id=4;
// while(id>=1){
//     printf("%d\n",id);
//     id--;
// }

//                      For Loop

int n;
printf("ENter value of N : ");
scanf("%d",&n);
for (int t = 1; t<=n; t++){
    printf("%d\n",t);
}

//                    While Loop

int di;
printf("Enter n : ");
scanf("%d",&di);
int id=0;
do{
    printf("%d",id);
    id++;
}while(id<=di);
    return 0;
}