#include<stdio.h>
int get_factorial(int);
int main()
{
  int number;
  printf("enter a number:");
  scanf("%d", &number);
  int factorial = get_factorial(number);
  printf("factorial is %d", factorial);
  return 0;
}

int get_factorial(int number){
  int factorial = 1;
  for (int i = number; i > 0; i--)
  {
    factorial = factorial * i;
  }

  return factorial;
}