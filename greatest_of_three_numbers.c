#include<stdio.h>
int get_greatest_of_three(int,int,int);
int main()
{
  int number1,number2,number3;
  printf("enter a number:");
  scanf("%d", &number1);
   printf("enter another number:");
  scanf("%d", &number2);
  printf("enter another number:");
  scanf("%d", &number3);
  int largest = get_greatest_of_three(number1, number2,number3);
  printf("largest is %d", largest);
  return 0;
}

int get_greatest_of_three(int number1,int number2,int number3){
  if(number1>number2&&number1>number3){
    return number1;
  }
  if(number2>number3){
    return number2;
  }
  return number3;
}