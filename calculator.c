#include <stdio.h>
// Switch
int main()
{
    char operator;
    int num1,num2,result;
    printf("enter operator : ");
    scanf("%c", &operator);
    printf("enter two numbers : ");
    scanf("%d %d",&num1, &num2);
    switch (operator)
    {
    case '+':
        result = num1+num2;
        break;
    case '-':
        result = num1-num2;
        break;
    case '*':
        result = num1*num2;
        break;
    case '/':
        if (num2 !=0){
            result = num1/num2;
        }else{
            printf("Error! Division by Zero"); 
        }
        break;
    default: printf("not a valid operator");
    }
    printf("%d",result);
    return 0;
}