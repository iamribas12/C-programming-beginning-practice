#include<stdio.h>
#define F_LOW 0
#define F_HIGH 250
#define STEP 25
int main(){
    typedef int real;
    real fahrenheit, celcius;
    fahrenheit = F_LOW;
    printf("Fahrenheit Celcius\n\n");
    while (fahrenheit<= F_HIGH)
    {
        celcius = (fahrenheit - 32.0)/1.8;
        printf("%5.lf %7.2lf\n",fahrenheit, celcius);
        fahrenheit = fahrenheit + STEP;
    }

    typedef int marks;
    marks total_marks;
    scanf("%d",&total_marks);
    printf("%d",total_marks);
    return 0;
}