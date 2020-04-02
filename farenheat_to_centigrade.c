#include<stdio.h>
float get_temparature_in_centigrade(int);
int main()
{
  int temperature_in_farenheat;
  printf("enter temperature in farenheat:");
  scanf("%d", &temperature_in_farenheat);
  float temperature_in_centigrade = get_temparature_in_centigrade(temperature_in_farenheat);
  printf("temperature in centigrade is %f", temperature_in_centigrade);
  return 0;
}

float get_temparature_in_centigrade(int temperature_in_farenheat){
  return (temperature_in_farenheat - 32) * 5 / 9;
}