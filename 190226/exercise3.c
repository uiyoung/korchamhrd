#include <stdio.h>

int main()
{
    char name[10];
    int age;
    char phoneNumber[15];
    char hometown[30];
    double height;
    char address[30];
    char speciality[30];
    char weakness[30];

    printf("이름, 나이, 연락처, 고향, 키, 주소, 잘하는 것, 못하는 것을 입력하세요 >>");

    scanf("%s %d %s %s %lf %s %s %s", name, &age, phoneNumber, hometown, &height, address, speciality, weakness);

    printf("----------------------------\n");
    printf("이름:%s\n", name);
    printf("나이:%d\n", age);
    printf("연락처:%s\n", phoneNumber);
    printf("고향:%s\n", hometown);
    printf("키:%.1lf\n", height);
    printf("주소:%s\n", address);
    printf("잘하는 것:%s\n", speciality);
    printf("못하는 것:%s\n", weakness);

    return 0;
}
