#include<stdio.h>
#include<math.h>
float get_compount_interest(int,float,int);
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
  float compount_interest = get_compount_interest(principal,interest,year);
  printf("compount interest is %f", compount_interest);
  return 0;
}

float get_compount_interest(int principal,float interest,int year){
  return (principal *pow(( 1+(interest / 100)),year) -principal);
}