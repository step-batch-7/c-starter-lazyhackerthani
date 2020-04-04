#include<stdio.h>
int get_even_number_series(int);
int main()
{
  int limit;
  printf("enter the limit:");
  scanf("%d", &limit);
  printf("even number series of %d numbers\n", limit);
 get_even_number_series(limit);
  return 0;
}

int get_even_number_series(int no_of_terms){
  for (int term_count = 2; term_count <= no_of_terms; term_count=term_count+2)
  {
    printf("%d  ", term_count);
  }
  return 0;
}
