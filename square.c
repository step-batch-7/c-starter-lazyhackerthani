#include<stdio.h>
int get_squre(int);
int main()
{
  int number;
  printf("enter a number:");
  scanf("%d", &number);
  int squre=get_squre(number);
  printf("square is %d", squre);
  return 0;
}
int get_squre(int number){
  return number * number;
}