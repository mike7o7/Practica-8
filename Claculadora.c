/*Mikel Martinez Mendoza
Ejercicio 1, practica 4
Hacer un algoritmo que permita sumar, restar, dividir y multiplicar
segun la eleccion del ususario


#include <stdio.h>
#include <math.h>


int main ()
{
  int a = 0, b = 0, operation = 0;
  int option;

  printf("dime que operacion deseas realizar: \n");
  printf("1 .- suma\n");
  printf("2 .- resta\n");
  printf("3 .- multiplicacion\n");
  printf("4 .- division\n");
  scanf("%d", &option);

  do
  {
      printf("dame los numeros:\n");
      printf("numer 1: ");
      scanf("%d" , &a);
      printf("numero 2: ");
      scan("%d" , &b);

      switch (option)
      {
          case 1:
              operation = a + b;
              break;
          case 2:
              operation = a - b;
              break;
          case 3;
              operation = a * b;
              break;
          case 4:
              operation = a / b;
              break;
      }

      printf("el resultado de la operacion es: %d\n", operation);


      printf("Deseas realizar otra operacion:\n");
      printf("1 .- suma\n");
      printf("2 .- resta\n");
      printf("3 .- multiplicacion\n");
      printf("4 .- division\n");
      printf("deseas salir: \n");
      printf("-1 .- salir\n");
      scanf("%d , &option);
  }
  while (option != -1);

  return 0;
}
      
      
