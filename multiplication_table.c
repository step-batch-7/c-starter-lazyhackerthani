#include<stdio.h>
int get_multiplication_table(int,int);
int main()
{
  int number,limit;
  printf("enter a no:");
  scanf("%d", &number);
  printf("enter the limit:");
  scanf("%d", &limit);
  printf("multiplication table for %d till %d\n", number,limit);
 get_multiplication_table(number,limit);
  return 0;
}

int get_multiplication_table(int number,int limit){
  for (int term_count = 1; term_count <= limit; term_count++)
  {
    printf("%d x %d = %d\n ", term_count,number,number*term_count);
  }
  return 0;
}
