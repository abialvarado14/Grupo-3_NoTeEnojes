// PiezaAzul.cpp

#include "PiezaAzul.h"

PiezaAzul::PiezaAzul()
{
}
PiezaAzul::PiezaAzul(int x, int y, char simbolo) : Pieza(x, y, simbolo)
{
}

Pieza* PiezaAzul::ingresar(int R1, int R2)
{
	Pieza* P;
	if((R1 == 1 && R2 == 1) || (R1 == 6 && R2 == 6))
	{
		P = new Pieza(, '%');
	}
	else
	{
	}
	return P;
}
