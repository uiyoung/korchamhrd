#include <stdio.h>

int main()
{
    printf("소문자를 대문자로 변환\n");
    printf("소문자 하나를 입력하세요>>");

    int ch1 = getchar();
    int ch2 = ch1 - 32;

    printf("%c -> %c\n", ch1, ch2);

    return 0;
}
