#include <stdio.h>

int main()
{
    int age;
    double height;

    printf("input age and height>>");
    scanf("%d%lf", &age, &height);
    printf("age:%d, height:%.1lfcm\n", age, height);

    return 0;
}
