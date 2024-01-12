1. write first n natural numbers using while loop.
 #include<stdio.h>
 int main(){
     int n;
     printf("Enter n : ");
     scanf("%d",&n);
     int i =1;
     while(i<=n){
         printf("%d\n",i);
         i++;
     }
     return 0;
 }

2. write a program to add first n numbers using while loop.
 #include <stdio.h>

int main() {
    int n, sum = 0, count = 1;

    printf("Enter the n number want to add: ");
    scanf("%d", &n);

    while(count <= n) {
        sum += count;
        count++;
    }

    printf("The sum of the first %d numbers is %d\n", n, sum);

//     return 0;
// }
#include<stdio.h>
int main(){
    int begining,ending;
    printf("Enter upper limit : ");
    scanf("%d",&begining);
    printf("Enter lower limit : ");
    scanf("%d",&ending);
    for(int i =begining;i<=ending;i++){
        if(i%3 ==0 || i%5 == 0){
            printf("%d\n",i);
        }
    }
    return 0;
}

write a c program to add even numbers in a given range.
#include<stdio.h>
int main(){
    int begin,end,sum=0;
    printf("Enter upper limit : ");
    scanf("%d",&begin);
    printf("Enter lower limit : ");
    scanf("%d",&end);
    for(int i = begin;i<=end;i++){
        if(i%2==0){
            sum = sum+i;
    }
    }
    printf("Sum of all even numbers between %d to %d : %d",begin,end,sum);
    return 0;

}
write a c program to find factorial of a given number.
#include <stdio.h>
int main(){
    int n;
    printf("Enter number for factorial : ");
    scanf("%d",&n);
    int fact = 1;
    for(int i = 1;i<=n;i++){
        fact = fact * i;
    }
    printf("factorial of %d number : %d",n,fact);
    return 0;
}
write a c program to find whether a number is prime or not
#include <stdio.h>

int main() {
    int num,i;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a prime number", num);
    } else {
        for ( i = 2; i * i <= num; i++) {
            if (num % i == 0) {
                printf("%d is not a prime number", num);
                break;
            }
        }
        if (i * i > num)
            printf("%d is a prime number", num);
    }

    return 0;
}
write a c program to find whether a number palindorme or not.

#include <stdio.h>
int main()
{
    int num, temp, digit, rem, c;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    c = num;
    temp = num;
    while (temp > 0)
    {
        temp = temp / 10;
        digit++;
    }
    temp = num;
    while (temp > 0)
    {
        rem = temp % 10;
        if (rem != num % 10)
            break;
        temp = temp / 10;
        num = num / 10;
    }
    if (temp == 0)
        printf("%d is a palindrome number", c);
    else
        printf("%d is not a palindrome number", c);
    return 0;
}

write a c program to add digits of a number.
#include <stdio.h>

int main() {
    int num, temp, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp > 0) {
        sum += temp % 10;
        temp = temp/10;
    }

    printf("Sum of digits of %d is %d\n", num, sum);

    return 0;
}
write a c program to print the fibonacci series.
#include <stdio.h>

int fibonacci(int n) {
   if (n <= 1)
      return n;
   return fibonacci(n-1) + fibonacci(n-2);
}

int main() {
   int n, i;

   printf("Enter the number of terms: ");
   scanf("%d", &n);

   printf("Fibonacci Series: ");

   for (i = 0; i < n; i++) {
      printf("%d ", fibonacci(i));
   }

   return 0;
}
// write a c program to check whether a number is armstrong number or not.
#include <stdio.h>

int main() {
    int num, digit, temp, count;
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    count = 0;

    while (temp != 0) {
        temp /= 10;
        ++count;
    }

    temp = num;
    while (temp != 0) {
        digit = temp % 10;
        count -= 1;
        if (digit * digit * digit != num) {
            printf("%d is not an Armstrong number\n", num);
            return 0;
        }
        temp /= 10;
    }

    printf("%d is an Armstrong number\n", num);
    return 0;
}

// write a c program to find gcd/hcf and lcm of two numbers
#include <stdio.h>

int gcd(int a, int b) {
    if (b == 0)
        return a;
    else
        return gcd(b, a % b);
}

int hcf(int a, int b) {
    return gcd(a, b);
}

int lcm(int a, int b) {
    return (a * b) / hcf(a, b);
}

int main() {
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("The GCD of %d and %d is: %d\n", num1, num2, gcd(num1, num2));
    printf("The HCF of %d and %d is: %d\n", num1, num2, hcf(num1, num2));
    printf("The LCM of %d and %d is: %d\n", num1, num2, lcm(num1, num2));

    return 0;
}
// write a c program to check a number is krishnamurthy number or not
#include <stdio.h>
#include <math.h>

int factorial(int num) {
    int result = 1;
    for (int i = 2; i <= num; i++) {
        result *= i;
    }
    return result;
}

int check_krishnamurthy(int num) {
    int sum = 0;
    for (int i = 1; i <= sqrt(num); i++) {
        if (num % i == 0) {
            sum += factorial(i);
            if (i != num / i) {
                sum += factorial(num / i);
            }
        }
    }
    return sum == num;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if (check_krishnamurthy(num)) {
        printf("%d is a Krishnamurthy number\n", num);
    } else {
        printf("%d is not a Krishnamurthy number\n", num);
    }
    return 0;
}

// write a c program to sum of the series: 1+(1+2)+(1+2+3)+....up to nth term.
#include <stdio.h>

int factorial(int num) {
    int result = 1;
    for (int i = 1; i <= num; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    printf("The sum of the series up to %dth term is: %d\n", n, sum);
    return 0;
}

// write a c program to sum of the series: 1-2+3+4+5.....up to nth term.
#include <stdio.h>

int sum(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++) {
        sum += (i % 2 == 0) ? -i : i;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("The sum of the series up to %dth term is: %d\n", n, sum(n));
    return 0;
}

#include <stdio.h>

int main() {
    int i, j, rows;

    printf("Enter the number of rows for the pattern: ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++) {
        for(j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}