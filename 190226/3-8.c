/* char 배열에 문자열 복사 */
#include <stdio.h>
#include <string.h>

int main()
{
    char fruit[20] = "strawberry";

    printf("%s\n", fruit);
    strcpy(fruit, "banana");
    printf("%s\n", fruit);

    return 0;
}
        
