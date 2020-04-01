#include<stdio.h>
int getCube(int);
int main()
{
  int number;
  printf("enter a number:");
  scanf("%d", &number);
  int cube=getCube(number);
  printf("cube is %d", cube);
  return 0;
}
int getCube(int number){
  return number * number* number;
}