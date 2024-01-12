#include<idio.h>
int main(){
    int n;
    printf("Enter number : ");
    scanf("%d",&n);

    int sum = 3;
    for(int i= 1; i<=n; i++){
        sum = sum + i;
        printf("%d\n",sum);
    }
    for(int i= 1; i<=n; i++){
        printf("%d\n",i);
    }
    printf("sum is %d",sum);

    return 0;
}