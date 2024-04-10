#include "NoEntiendo.hpp"
#include "Particulas.h"

Particulas	*CreaParticulas(float px, float py, float t)
{
	Particulas	*ptr = (Particuas *)malloc(sizeof(Particulas));

	ptr->posX = px;
	ptr->posY = py;
	ptr-time = t;

	return (ptr);
}

void	ActualizaParticulas(Particulas *ptr)
{
	
}

void	DibujaParticula(Particulas *ptr)
{
	NOE_DibujaSprite(6, ptr->posX, ptr-posY, -1, -1, 0, 0);
}
