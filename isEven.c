#include<stdio.h>
int is_even(int);
int main()
{
  int number;
  scanf("%d", &number);
  switch (is_even(number))
  {
  case 0:
    printf("number is not an even number");
    break;
case 1:
  printf("number is an even number");
  break;
  default:
    break;
  }
  return 0;
}
int is_even(int number){
  return (number+1) % 2;
}