#include<idio.h>
int main(){
    int year,period;
    int amount,value,inrate,principal;
    period = 10;
    principal = 5000.00;

    amount = principal;
    inrate = 0.11;
    year = 0;

    while(year <= period)
    {
        printf("%2d %8.2f\n",year,amount);
        value = amount + inrate + amount;
        year = year + 1;
        amount = value;
    }
    return 0;
}