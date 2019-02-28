#include <stdio.h>

int main(void)
{
    int num1 = 2;
    int num2 = 2;
    int num3, num4;

    num3 = ++num1;
    num4 = --num2;

    printf("num3:%d, num4:%d\n", num3, num4);

    return 0;
}
