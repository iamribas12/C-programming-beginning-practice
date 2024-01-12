#include <idio.h>
// Switch
int main()
{
    char day;
    printf("enter day : ");
    scanf("%c", &day);

    switch (day)
    {
    case 'm':
        printf("monday");
        break;
    case 't':
        printf("tuesday");
        break;
    case 'w':
        printf("wednesday");
        break;
    case 'T':
        printf("Thursday");
        break;
    case 'f':
        printf("friday");
        break;
    case 's':
        printf("saturday");
        break;
    case 'S':
        printf("Sunday");
        break;
    default: printf("not a valid day");
    }
    return 0;
}