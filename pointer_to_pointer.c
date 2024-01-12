#include<stdio.h>
int main(){
    int i;
    printf("Enter no. : ");
    scanf("%d",&i);
    int *ptr = &i;
    int **pptr = &ptr;
    printf("%d\n",**pptr);
    printf("%d\n",&pptr);
    printf("%d",*ptr);

    return 0;
}