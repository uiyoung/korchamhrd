#include <stdio.h>

int main()
{
    char grade;
    char name[20];

    printf("학점 입력>>");
    scanf("%c", &grade);

    printf("이름>>");
    scanf("%s", name);

    printf("%s의 학점은 %c 입니다.\n", name, grade);

    return 0;
}
