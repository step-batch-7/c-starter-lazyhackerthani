#include<stdio.h>
int isEven(int);
int main()
{
  int number;
  scanf("%d", &number);
  switch (isEven(number))
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
int isEven(int number){
  return (number+1) % 2;
}