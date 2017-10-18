#include <stdio.h>

struct estructura_amigo {
	char nombre[30];
	char apellido[40];
	char telefono[10];
	int edad;
};

struct estructura_amigo amigo = {
	"Juanjo",
	"López",
	"983403367",
	30
};

int suma( struct estructura_amigo );

int main(void)
{
	printf( "%s ]tiene ", amigo.apellido );
	printf( "%i años ", amigo.edad );
	printf( "y dentro de 20 aÃ±os tendrÃ¡ %i.\n", suma(amigo) );
}

int suma( struct estructura_amigo arg_amigo )
{
	return arg_amigo.edad + 20;
}