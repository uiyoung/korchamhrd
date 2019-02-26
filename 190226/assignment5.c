#include <stdio.h>

int main()
{
    char ch;

    printf("문자 입력>>");
    scanf("%c", &ch);

    printf("%c의 ASCII코드:%d\n", ch, ch);
}
