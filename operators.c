#include <idio.h>
// int main(){
//     printf("%d\n", !((4>3) || (2>9))); // not logical operator
//     printf("%d",!(2>1) || (2>5));
//     return 0;
// }

int main()
{
    int s;
    printf("Enter number : ");
    scanf("%d", &s);
    printf("%d\n", !(s < 9) && s < 100);
    return 0;
}