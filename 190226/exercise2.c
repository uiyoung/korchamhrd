#include <stdio.h>
#include <string.h>

int main()
{
    char sports[20] = "taekwondo";
    printf("%s\n", sports);
    
    strcpy(sports, "swimming");
    printf("%s\n", sports);
    strcpy(sports, "volleyball");
    printf("%s\n", sports);
    strcpy(sports, "football");
    printf("%s\n", sports);
    strcpy(sports, "baseball");
    printf("%s\n", sports);
    strcpy(sports, "pingpong");
    printf("%s\n", sports);
   
    return 0;
}
  
