#include<stdio.h>
int is_even(int);
int main()
{
  int number;
  scanf("%d", &number);
  switch (is_even(number))
  {
  case 0:
  printf("number is an odd number");  
    break;
case 1:
printf("number is not an odd number");
  break;
  default:
    break;
  }
  return 0;
}
int is_even(int number){
  return (number+1) % 2;
}