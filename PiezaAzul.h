// PiezaAzul.h

#include "Pieza.h"

#ifndef PIEZAAZUL_H
#define PIEZAAZUL_H

class PiezaAzul : Pieza
{
	public:
		PiezaAzul();
		PiezaAzul(int, int, char);
		
		virtual Pieza* ingresar();
		virtual bool zonaFinal(int, int);
		virtual Pieza* move(int);
};

#endif
