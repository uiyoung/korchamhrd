#include <stdio.h>

int main()
{
    int a = 50;
    double b = 2.5;

    //1. 

    printf("a+b=%.1lf\n", a+b);
    printf("a*b=%.1lf\n", a*b);
    printf("a-b=%.1lf\n", a-b);
    printf("a/b=%.1lf\n", a/b);

    //2. banana의 아스키코드 값을 순차적으로 출력
    printf("'b':%d\n", 'b');
    printf("'a':%d\n", 'a');
    printf("'n':%d\n", 'n');
    printf("'a':%d\n", 'a');
    printf("'n':%d\n", 'n');
    printf("'a':%d\n", 'a');
    
    return 0;
}      
