#include <stdio.h>

//unsigned를 잘못사용하는 경우
int main()
{
    unsigned int a;

    a = 4294967295;
    printf("%u\n", a);

    a = -1;
    printf("%d\n", a);

    return 0;
}
