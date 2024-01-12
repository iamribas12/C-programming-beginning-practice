#include <idio.h>
int main()
// {
//     int age;
//     printf("Enter your age : ");
//     scanf("%d", &age);

//     if (age >= 18)
//     {
//         printf("congrats you're adult\n");
//         printf("now, you have the right to vote");
//     }
//     else
//     {
//         printf("Sorry, you aren't adult");
//     }
//     return 0;
// }
{
    int number;
    printf("enter your number : ");
    scanf("%d", &number);

    // if(age >= 18 ){
    //     printf("you're adult");
    // }
    // else if(age<18 && age>13){
    //     printf("you're teenager");
    // }
    // else{
    //     printf("You're a child yet");
    // }

    //    Neied conditionals

    if (number >= 0)
    {
        printf("Positive\n");
        if (number % 2 == 0)
        {
            printf("Even number\n");
        }
        else
        {
            printf("Odd Number\n");
        }
    }
    else
    {
        printf("Negative\n");
        if (number % 2 == 0)
        {
            printf("Even\n");
        }
        else
        {
            printf("Odd");
        }
    }
    return 0;
}