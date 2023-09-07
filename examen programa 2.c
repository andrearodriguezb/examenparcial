#include <stdio.h>
#include <math.h>

int main ()

{

int numero;
int suma = 0;

printf("Ingresa un numero\n"); 
scanf("%d", &numero);

while(numero != 0)
{
	suma += numero % 10;
	numero /=10;
}

printf("La suma de sus cifras es %d\n", suma);

/*Este programa suma los dígitos de un número*/

return 0;
}


