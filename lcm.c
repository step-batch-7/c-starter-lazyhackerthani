#include<stdio.h>
int getGCD(int,int);
int getLCM(int,int);
int main()
{
  int number1,number2;
  printf("enter a number:");
  scanf("%d", &number1);
   printf("enter another number:");
  scanf("%d", &number2);
  int lcm = getLCM(number1, number2);
  printf("lcm is %d", lcm);
  return 0;
}

int getLCM(int number1,int number2){
  return (number1 * number2) / getGCD(number1, number2);
}

int getGCD(int number1, int number2){
  int reminder = number2;
  if(reminder==0){
    return number1;
  }
  return getGCD(number2, number1 % number2);
}