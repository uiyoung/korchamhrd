#include <stdio.h>

int main()
{
    int xPoint1, yPoint1, xPoint2, yPoint2;

    printf("첫 번째 포인트의 x,y 좌표>>");
    scanf("%d %d", &xPoint1, &yPoint1);

    printf("두 번쨰 포인트의 x,y 좌표>>");
    scanf("%d %d", &xPoint2, &yPoint2);

    printf("넓이 : %d\n", (xPoint2-xPoint1) * (yPoint2-yPoint1));

    return 0;
}
