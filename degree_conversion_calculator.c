#include <stdio.h>


void conversor();
double f_toC(double, double *);
double c_toF(double, double *);


int main(void) {

  double celsius, fahrenheit;
  conversor();
  c_toF(celsius, &fahrenheit);
  f_toC(fahrenheit, &celsius);

  return 0;
}

void conversor()
{
  int option;
  double celsius, fahrenheit;

  do
  {
    printf("Calculator C TO F AND F TO C\n");
    printf("1. Calculator C TO F \n");
    printf("2. Calculator F TO C\n");

    do{
        printf("\nSelect a calculator: ");
        scanf("%d", &option);
      } while(option < 1 || option > 2);

    switch(option)
    {
      case 1:
      f_toC(celsius, &fahrenheit);
      break;
      case 2:
      c_toF(fahrenheit, &celsius);
      break;
    }

  }while (option != 0);
}

double c_toF(double celsius, double *fahrenheit)
{
  printf("Insert degrees in Celsius:  ");
  scanf("%lf", &celsius);
  
  *fahrenheit = (celsius * 1.8) + 32;
  printf("Celsius = %.2lf to fahrenheit %.2lf\n", celsius, *fahrenheit);
}

double f_toC(double fahrenheit, double *celsius){

  printf("Insert degrees in Fahrenheit: ");
  scanf("%lf", &fahrenheit);

  *celsius = (fahrenheit - 32) * .5556;
  printf("Fahrenheit = %.2lf to celsius %.2lf\n", fahrenheit, *celsius);

}
