#include <stdio.h>
#include <stdlib.h>

int somar(int valor1, int valor2)
{
	int z = 0;

	z = valor1 + valor2;
	return z;
}


int main()
{
	int x = 10;
	int y = 20;
	int z = 0;

	z = somar(x, y);

	printf("\nO resultado da soma e: %d\n", z);

}