#include<stdio.h>
int getGCD(int,int);
int main()
{
  int number1,number2;
  printf("enter a number:");
  scanf("%d", &number1);
   printf("enter another number:");
  scanf("%d", &number2);
  int gcd = getGCD(number1, number2);
  printf("gcd is %d", gcd);
  return 0;
}

int getGCD(int number1, int number2){
  int reminder = number2;
  if(reminder==0){
    return number1;
  }
  return getGCD(number2, number1 % number2);
}