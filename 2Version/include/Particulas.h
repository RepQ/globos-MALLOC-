#ifndef		__PARTICULAS_H__
#define		__PARTICULAS_H__
typedef	struct
{
	float	posX;
	float	posY;
	float	time;
} Particulas;

Particulas	*CreaParticula(float, float, float);
void	ActualizaParticula(Particulas*);
void	DibujaParticula(Particulas*);
#endif
