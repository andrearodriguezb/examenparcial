#include <stdio.h>
#include <math.h>

int main ()
{

int n;
int suma=0;
int contador=0;

printf("Escribe un numero para conocer el resultado de su suma\n");
scanf("%d", &n);


while (contador <=n)
{
	suma+=contador;
	contador++;
	
}
	printf("%d\n",suma);
	
/*Este programa imprime la suma de n números*/

return 0;	
}




