#include<stdio.h>
int get_odd_number_series(int);
int main()
{
  int count;
  printf("enter a no of terms in the odd_number series:");
  scanf("%d", &count);
  printf("odd_number series of %d numbers\n", count);
 get_odd_number_series(count);
  return 0;
}

int get_odd_number_series(int no_of_terms){
  for (int term_count = 1; term_count <= no_of_terms; term_count=term_count+2)
  {
    printf("%d  ", term_count);
  }
  return 0;
}
