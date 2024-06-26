#include "infladores.h"
#include "Globos.h"
#include "Particulas.h"
#include "NoEntiendo.hpp"
#include <stdlib.h>

Globos	*globosInflados[100];
Particulas	*particulasCreadas[100];
int	numInflados = 0;
int	numParticulas = 0;

Infladores	*CreaInflador(float x, float y, int c)
{
	Infladores	*ptr = (Infladores *)malloc(sizeof(Infladores));

	ptr->posX = x;
	ptr->posY = y;
	ptr->color = c;

	return (ptr);
}

int	ChocaConInflador(Infladores *inf, float rx, float ry)
{
	float	dx = inf->posX - rx;
	float	dy = inf->posY - ry;
	float	d = dx * dx + dy * dy;

	if (d < 10000)
		return (1);
	else
		return (0);
}

void	InflarGlobo(Infladores *inf)
{
	Globos	*g;
	Particulas	*p;

	p = CreaParticula(inf->posX, inf->posY);
	g = CreaGlobo(inf->posX, inf->posY, inf->color);
	PonVelocidadGlobo(g, 0, -200);

	particulasCreadas[numParticulas] = p;
	globosInflados[numInflados] = g;
	numInflados++;
	numParticulas++;
}

void	ActualizaInflador(Infladores	*inf)
{

}

void	DibujaInflador(Infladores *inf)
{
	NOE_DibujaSprite(7, inf->posX, inf->posY, -1, -1, 0, 0);
}

void	DibujaGloboInflador()
{
	for (int i = 0; i < numInflados; i++)
		DibujaGlobo(globosInflados[i]);
}

void	ActualizaGlobosInflados()
{
	for (int i = 0; i < numInflados; i++)
		ActualizaGlobo(globosInflados[i]);
}

void	DibujaParticulaInflador()
{
	for (int i = 0; i < numParticulas; i++)
		DibujaParticula(particulasCreadas[i]);
}

void	ActualizaParticulaInflador()
{
	for (int i = 0; i < numParticulas; i++)
		ActualizaParticula(particulasCreadas[i]);
}
