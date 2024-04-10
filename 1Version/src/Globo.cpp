#include "Globos.h"
#include <stdlib.h>
#include "NoEntiendo.hpp"

Globos	*CreaGlobo(float x, float y, int c)
{
	Globos	*ptr = (Globos *)malloc(sizeof(Globos));
	ptr->posX = x;
	ptr->posY = y;
	ptr->color = c;

	return (ptr);
}

void	PonPosicionGlobo(Globos *g, float x, float y)
{
	g->posX = x;
	g->posY = y;
}

void	PonVelocidadGlobo(Globos *g, float vx, float vy)
{
	g->velX = vx;
	g->velY = vy;
}

void	ActualizaGlobo(Globos *g)
{
	float	deltaTime;

	deltaTime = NOE_ObtenTiempoDesdeActualizacion() / 1000.f;

	g->posX += g->velX * deltaTime;
	g->posY += g->velY * deltaTime;
	g->velY += 100 * deltaTime;

	if (g->posY + 140 >= NOE_ObtenAltoPantalla())
		g->posY = NOE_ObtenAltoPantalla() - 140;
}

void	DibujaGlobo(Globos *g)
{
	NOE_DibujaSprite(g->color, g->posX, g->posY, -1, -1, 0, 0);
}
