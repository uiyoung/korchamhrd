#include <stdio.h>

int main(void)
{
    int a = 10, b = 3;
    double c = 10, d = 2;

    printf("정수타입일 때 나눗셈 값 : %d \n", a/b);
    printf("정수타입일 때 나머지 값 : %d\n", a%b);
    printf("실수타입일 때 나눗셈 값 : %lf\n", c/d);
    printf("실수타입일 때 나머지 값 : %lf\n", c%d);

    return 0;
}
