// #include <stdio.h>
// int sum();
// int main()
// {
//   int sum(int a, int b){
//     printf("%d",a+b);
//   }
//   int a,b;
//   printf("Enter two number for sum : ");
//   scanf("%d%d",&a,&b);

//   sum(a,b);
//     return 0;
// }

#include <stdio.h>
void calc(int n);
int main()
{
  int value;
  int dot;
  printf("Enter price : ");
  scanf("%d", &value);
  dot = (int)value;
  calc(dot);
  return 0;
}

void calc(int n)
{
  n = n + (0.18*n);
  printf("Total price is %2.2f", n);
}