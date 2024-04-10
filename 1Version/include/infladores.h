#ifndef		__INFLADORES_H__
#define		__INFLADORES_H__

typedef struct
{
	float	posX;
	float	posY;
	int	color;
} Infladores;

Infladores	*CreaInflador(float, float, int);
void	ActualizaInflador(Infladores*);
void	DibujaInflador(Infladores*);
#endif
