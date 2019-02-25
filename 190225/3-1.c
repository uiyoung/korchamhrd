#include <stdio.h>

int main()
{
    int a;
    int b, c;
    double da;
    char ch;

    a = 10;
    b = a;
    c = a + 20;
    da = 3.5;
    ch = 'A';

    printf("변수 a의 값 : %d\n", a);
    printf("변수 b의 값 : %d\n", b);
    printf("변수 c의 값 : %d\n", c);
    printf("변수 da의 값 : %.1lf\n", da);
    printf("변수 ch의 값 : %c\n", ch);

    printf("--------------------------\n");

    // 1. 변수 a+b+c+30값을 출력
    printf("a+b+c+30 = %d\n", a+b+c+30);
    
    // 2. ch를 'b'로 초기화한 후 출력
    ch = 'b';
    printf("%c\n", ch);

    // 3. da값을 10.5로 초기화 한 후 나누기 2 한 값을 출력
    da = 10.5;
    printf("%.2lf\n", da/2);

    // 4. int g를 선언, 500으로 초기화 한후 a값으로 나눈 값 출력
    int g = 500;
    printf("g/a = %d \n", g/a);

    return 0;
}
