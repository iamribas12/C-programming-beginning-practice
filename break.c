#include <stdio.h>
//note : break also exits from nested loops.
int main()
{
    int n;
    // do{
    // printf("Enter number : ");
    // scanf("%d",&n);
    //     if(n%2 == 1){
    //         printf("Exit");
    //         break;
    //     }
    //     printf("%d\n",n);
    // }while(1);
     do{
    printf("Enter number : ");
    scanf("%d",&n);
        if(n%7 == 0){
            printf("Exit");
            break;
        }
        printf("%d\n",n);
    }while(1);
   

    return 0;
}