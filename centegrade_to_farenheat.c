#include<stdio.h>
float get_temparature_in_farenheat(int);
int main()
{
  int temperature_in_celcius;
  printf("enter temperature in celcius:");
  scanf("%d", &temperature_in_celcius);
  float temperature_in_farenheat = get_temparature_in_farenheat(temperature_in_celcius);
  printf("temperature in farenheat is %f", temperature_in_farenheat);
  return 0;
}

float get_temparature_in_farenheat(int temperature_in_celcius){
  return temperature_in_celcius *9/5 +32;
}