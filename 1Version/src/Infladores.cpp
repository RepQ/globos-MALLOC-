#include "infladores.h"
#include "NoEntiendo.hpp"
#include <stdlib.h>

Infladores	*CreaInflador(float x, float y, int c)
{
	Infladores	*ptr = (Infladores *)malloc(sizeof(Infladores));

	ptr->posX = x;
	ptr->posY = y;
	ptr->color = c;

	return (ptr);
}

void	ActualizaInflador(Infladores	*inf)
{

}

void	DibujaInflador(Infladores *inf)
{
	NOE_DibujaSprite(7, inf->posX, inf->posY, -1, -1, 0, 0);
}
