#include<stdio.h>
int get_fibonacci_series(int);
int main()
{
  int count;
  printf("enter a no of terms in the fibonacci series:");
  scanf("%d", &count);
  printf("fibonacci series of %d numbers\n", count);
 get_fibonacci_series(count);
  return 0;
}

int get_fibonacci_series(int no_of_terms){

{
  int current_term = 1, last_term = 0;
  for (int term_count = 1; term_count <= no_of_terms; term_count++)
  {
    printf("%d   ", last_term);
    int temp = current_term;
    current_term = current_term + last_term;
    last_term = temp;
  }
  return 0;
}
}