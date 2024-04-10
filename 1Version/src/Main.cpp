#include "NoEntiendo.hpp"
#include <stdio.h>
#include "Globos.h"
#include "infladores.h"

Globos	*g1;
Globos	*g2;
Infladores	*inflador1;
Infladores	*inflador2;

int main()
{
	NOE_Inicia();
	
	NOE_ReproduceMusica(0, 100, 100);
    
    	NOE_PonMostrarCursor(1);
    	NOE_PonDesplazamientoCursor(8, 8);

	g1 = CreaGlobo(0, 100, 3);
	g2 = CreaGlobo(50, 0, 2);
	inflador1 = CreaInflador(400, 400, 1);
	inflador2 = CreaInflador(800, 400, 1);
	
	while(!NOE_ObtenTeclaPulsada(NOE_TECLA_ESCAPE))
	{
		NOE_Actualiza();
		ActualizaGlobo(g1);
		ActualizaGlobo(g2);
		ActualizaInflador(inflador1);
		ActualizaInflador(inflador2);
        
		NOE_LimpiaPantalla(0, 0, 0);
		NOE_DibujaDecorado(0);
        
		NOE_DibujaSprite(0, 100, 100, -1, -1, 0, 0);
		NOE_DibujaSprite(7, 1000, 500, -1, -1, 0, 0);
		DibujaGlobo(g1);
		DibujaGlobo(g2);
		DibujaInflador(inflador1);
		DibujaInflador(inflador2);

		
		NOE_MuestraPantalla();
	}

	NOE_ParaMusica();
	
	NOE_Finaliza();

    return 0;
	
}
