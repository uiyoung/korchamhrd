#include <stdio.h>

int main()
{
    double a, b;

    printf("두개의 실수를 입력 >>");
    scanf("%lf %lf", &a, &b);

    printf("a+b=%lf\n", a+b);
    printf("a-b=%lf\n", a-b);
    printf("a*b=%lf\n", a*b);
    printf("a/b=%lf\n", a/b);

    return 0;
}
