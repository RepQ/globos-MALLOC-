#ifndef		__GLOBOS_H_
#define		__GLOBOS_H_

typedef struct
{
	float	posX;
	float	posY;
	float	velX;
	float	velY;
	int	color;
} Globos;

Globos	*CreaGlobo(float, float, int);
void	PonPosicionGlobo(Globos*, float, float);
void	PonVelocidadGlobo(Globos*, float, float);
void	ActualizaGlobo(Globos*);
void	DibujaGlobo(Globos*);
#endif
