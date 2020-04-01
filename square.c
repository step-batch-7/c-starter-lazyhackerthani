#include<stdio.h>
int getSqure(int);
int main()
{
  int number;
  printf("enter a number:");
  scanf("%d", &number);
  int squre=getSqure(number);
  printf("square is %d", squre);
  return 0;
}
int getSqure(int number){
  return number * number;
}