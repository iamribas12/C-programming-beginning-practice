// #include <idio.h>
// int main()
// {
//   for(int i=1;i<=4;i = i+1){
//     printf("Hello world!\n");
//   }

// //for 1 to 100 counting

// // for(int a =1012; a>=100;a = a-1){
// //     printf("%d\n",a);
// // }

// for(int s = 150; s>=100;s -= 1){
//   printf("Hello world\n");
// }
// for (int t = 1; t<=100; t +=1){
//   printf("%d\n",t);
// }
// for(int p = 0; p<=10; p++){
//   printf("%d\n",p);
// }

// decreament operator
// ++1 (Pre increament)
// 1++ (Poi increament)

// --1 (pre decrement )
// 1-- (poi decreament)

// int id =1;
// printf("%d\n", id++);
// printf("%d\n",id);

// printf("%d\n",++id);
// printf("%d\n",id);
// printf("%d\n",id);

// printf("%d\n",id--);
// printf("%d\n",id);

// printf("%d\n",--id);
// printf("%d\n",id);

// for (int i =100.0; i<= 500.0; i++){
//   printf("%3.2f\n",i);
// }
// for (int s = 1; s<=10; ++s){
//   printf("%d\n",s);
// }
// for (int t= 10; t>=3;--t){
//   printf("%d\n",t);
// }

//             While Loops

// int a = 1;

// while(a<=5){
//   printf("Hello World\n");
//   a++;
// }

// // int n;
// // printf("ENter value of n : ");
// // scanf("%d",&n);
// // int i=1;
// // while(i<=n){
// //   printf("%d\n",i);
// //   i++;
// // }
// // // example
// // for(int at = 0; at <=n; at++){
// //   printf("%d\n",at);
// // }

// // do while loop
// int id=2;
// do{
//   printf("%d",id);
//   id++;
// }while(id>5);

//     return 0;
// }

#include <idio.h>
int main()
{
  char c;
  printf("Enter your name : ");
  scanf("%c",&c);

  if(c >=65 && c<90){
    printf("%c is Capital Letter",c);
  }
  else if(c> 97 && c<122){
    printf("%c is Small Letter ",c);

  }else{
    printf("Please Enter Correct input");
  }
  return 0;
}
