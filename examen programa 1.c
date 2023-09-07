#include <stdio.h>
#include <math.h>


int main ()

{

int n;
printf("Escribe un numero :)\n");
scanf("%d", &n);

while(n>=0)
{
	printf("Escribe un numero :)\n");
	scanf("%d", &n);


	if(n<0)

	printf("Sorry :(\n");
}

/*Este programa recibe números positivos hasta encontrar uno negativo*/


return 0;
}

