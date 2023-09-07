#include <stdio.h>
#include <math.h>

int main ()
{

int n;
int b=1;

	printf("Escribe un numero para conocer los siguientes\n");
	scanf("%d", &n);
	

	while (b<11)
	{
		printf("= %d\n", n+b);
			b++;
	}
	
	/*	Este programa imprime 10 números, partiendo del que dado*/
	return 0;	
	}




