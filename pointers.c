// #include<stdio.h>
// int main(){
//     int age = 20;
//     int *ptr = &age;
//     printf("%u\n",&age);
//     printf("%u\n",ptr);
//     printf("%d\n",&ptr);
//     return 0;
// }

#include<stdio.h>
int main(){
    int x; 
    int *ptr;
    ptr = &x;
    *ptr = 0;
    printf("%d\n",ptr);
    printf("%d\n",*ptr);
    printf("%d\n",x);
    printf("%d\n",&x);
    return 0;
}