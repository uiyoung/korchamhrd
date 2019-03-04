#include <stdio.h>

int main()
{
    // 1. 자기소개
    printf("이름 : 서의영\n");
    printf("성별 : 남\n");
    printf("하고싶은 말: 화이팅\n");
    printf("──────────────────────\n");

    // 2. 사칙연산
    int a, b;
    printf("정수 a, b 입력>>");
    scanf("%d%d", &a, &b);

    printf("%d + %d = %d\n", a, b, a+b);
    printf("%d - %d = %d\n", a, b, a-b);
    printf("%d * %d = %d\n", a, b, a*b);
    printf("%d / %d = %d\n", a, b, a/b);
    printf("%d %% %d = %d\n", a, b, a%b);
    printf("──────────────────────\n");

    // 3. 모든 종류의 변수 사용
    char charVar = 127;
    short shortVar = 32767;
    int intVar = 2147483647;
    long longVar = 2147483647;

    float floatVar = 3.14;
    double doubleVar = 23131532.3332112;
    long double longDoubleVar = 213122313.21213122;

    printf("size of char : %ld\n", sizeof(charVar));
    printf("size of short : %ld\n", sizeof(shortVar));
    printf("size of int : %ld\n", sizeof(intVar));
    printf("size of long : %ld\n", sizeof(longVar));
    printf("size of float : %ld\n", sizeof(floatVar));
    printf("size of double : %ld\n", sizeof(doubleVar));
    printf("size of long double : %ld\n", sizeof(long double));
    printf("──────────────────────\n");

    // 4. 산술, 관계, 증감, 논리 연산
    int c, d;
    printf("정수 c, d 입력>>");
    scanf("%d %d", &c, &d );

    printf("%d는 %d와 같다 : %d\n", c, d, c==d);
    printf("%d는 %d보다 크다 : %d\n", c, d, c>d);
    printf("%d는 %d보다 작다 : %d\n", c, d, c<d);
    printf("%d와 %d는 같지 않다 : %d\n", c,d, c!=d);
    printf("%d는 %d보다 작거나 같다 : %d\n", c, d,  c<=d);
    printf("%d는 %d보다 크거나 같다 : %d\n", c, d, c>=d);
    printf("++c : %d\n", ++c);
    printf("--d : %d\n\n", --d);

    int e, f;
    printf("true, false 두개 입력>>");
    scanf("%d %d", &e, &f);
    printf("%d && %d : %d\n", e, f, e && f);
    printf("%d || %d : %d\n", e, f, e || f);
    printf("!%d : %d\n", e, !e);

    return 0;
}





