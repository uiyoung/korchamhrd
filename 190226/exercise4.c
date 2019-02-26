#include <stdio.h>

int main()
{
    int a,b,c;

    printf("a b c를 입력하세요>>");
    scanf("%d %d %d", &a, &b, &c);

    int d = a + b + c;
    int e = d + b - c;
    int f = e * a - c;
    int g = f * b / a;

    printf("a + b + c = %d\n", d);
    printf("d + b - c = %d\n", e);
    printf("e * a - c = %d\n", f);
    printf("f * b / a = %d\n", g);

    return 0;
}
