#include<stdio.h>
int get_cube(int);
int main()
{
  int number;
  printf("enter a number:");
  scanf("%d", &number);
  int cube=get_cube(number);
  printf("cube is %d", cube);
  return 0;
}
int get_cube(int number){
  return number * number* number;
}