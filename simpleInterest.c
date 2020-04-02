#include<stdio.h>
float getSimpleInterest(int,float,int);
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
  float simpleInterest = getSimpleInterest(principal,interest,year);
  printf("simpleInterest is %f", simpleInterest);
  return 0;
}

float getSimpleInterest(int principal,float interest,int year){
  return principal * (interest/100) * year;
}