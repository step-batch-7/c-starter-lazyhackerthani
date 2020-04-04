#include<stdio.h>
int get_sum_of_any_n(int,int);
int main()
{
  int lower_limit,upper_limit;
  printf("enter the lower limit:");
  scanf("%d", &lower_limit);
   printf("enter the upper limit:");
  scanf("%d", &upper_limit);
  int sum = get_sum_of_any_n(lower_limit, upper_limit);
  printf("sum of numbers between %d and %d is %d",lower_limit,upper_limit, sum);
  return 0;
}

int get_sum_of_any_n(int lower_limit,int upper_limit){
  int sum = 0;
  for (int i = lower_limit; i <= upper_limit; i++)
  {
    sum = sum + i;
  }

  return sum;
}