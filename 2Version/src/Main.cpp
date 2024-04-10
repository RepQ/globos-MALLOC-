#include "NoEntiendo.hpp"
#include <stdio.h>
#include "infladores.h"

Infladores	*inflador1;
Infladores	*inflador2;

int main()
{
	NOE_Inicia();
	
	NOE_ReproduceMusica(0, 100, 100);
    
    	NOE_PonMostrarCursor(1);
    	NOE_PonDesplazamientoCursor(8, 8);

	inflador1 = CreaInflador(400, 400, 1);
	inflador2 = CreaInflador(800, 400, 1);
	
	while(!NOE_ObtenTeclaPulsada(NOE_TECLA_ESCAPE))
	{
		NOE_Actualiza();

		int	ratonX;
		int	ratonY;

		ratonX = NOE_ObtenPosicionRatonX();
		ratonY = NOE_ObtenPosicionRatonY();

		if (ChocaConInflador(inflador1, ratonX, ratonY) && NOE_ObtenBotonRatonAbajo(NOE_BOTONRATON_PRINCIPAL))
		{
			printf("CHOCA\n");
			InflarGlobo(inflador1);
		}

		else if (ChocaConInflador(inflador2, ratonX, ratonY) && NOE_ObtenBotonRatonAbajo(NOE_BOTONRATON_PRINCIPAL))
		{
			printf("NO CHOCA\n");
			InflarGlobo(inflador2);
		}
		ActualizaInflador(inflador1);
		ActualizaInflador(inflador2);
		ActualizaGlobosInflados();
        
		NOE_LimpiaPantalla(0, 0, 0);
		NOE_DibujaDecorado(0);
        
		NOE_DibujaSprite(0, 100, 100, -1, -1, 0, 0);
		NOE_DibujaSprite(7, 1000, 500, -1, -1, 0, 0);
		DibujaInflador(inflador1);
		DibujaInflador(inflador2);
		DibujaGloboInflador();

		
		NOE_MuestraPantalla();
	}

	NOE_ParaMusica();
	
	NOE_Finaliza();

    return 0;
	
}
