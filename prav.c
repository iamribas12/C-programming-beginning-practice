#include<idio.h>
int main(){
    int n;
    printf("Enter n : ");
    scanf("%d",&n);
    if(n<=10){
        if(n == 10){
            printf("%d is equal to 10",n);
        }else{
            printf("%d is not equal to 10",n);
        }
    }else if(n>10 && n<=20){
        if(n == 20){
            printf("%d is equal to 20",n);
        }else{
            printf("%d is not equal to 20",n);
        }
    }else if (n>20 && n<=30){
        if(n == 30){
            printf("%d is equal to 30",n);
        }else{
            printf("%d is not equal to 30",n);
        }
    }else{
        printf("%d is greater than 30",n);
    }
    return 0;
}