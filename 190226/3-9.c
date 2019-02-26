/*const를 사용한 변수*/

#include <stdio.h>

int main()
{
    int income = 0;
    double tax;
    const double TAX_RATE = 0.12;

    income = 456;
    tax = income * TAX_RATE;
    printf("your tax is %.1lf.\n",tax);

    return 0;
}
