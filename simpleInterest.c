#include<stdio.h>
float get_simple_interest(int,float,int);
int main()
{
  int principal,year;
  float interest;
  printf("enter initial principal balance:");
  scanf("%d", &principal);
   printf("enter annual interest rate:");
  scanf("%f", &interest);
   printf("enter time (in years):");
  scanf("%d", &year);
  float simple_interest = get_simple_interest(principal,interest,year);
  printf("simple interest is %f", simple_interest);
  return 0;
}

float get_simple_interest(int principal,float interest,int year){
  return principal * (interest/100) * year;
}