// Pieza.cpp

#include "Pieza.h"

Pieza::Pieza()
{
}
Pieza::Pieza(int x, int y, char simbolo)
{
	this -> x = x;
	this -> y = y;
	this -> simbolo = simbolo;
}

void Pieza::setX(int x)
{
	this -> x = x;
}
int Pieza::getX()
{
	return x;
}

void Pieza::setY(int y)
{
	this -> y = y;
}
int Pieza::getY()
{
	return y;
}

void Pieza::setSimbolo(char simbolo)
{
	this -> simbolo = simbolo;
}
char Pieza::getSimbolo()
{
	return simbolo;
}

Pieza* Pieza::ingresar(int R1, int R2)
{
}
bool Pieza::zonaFinal(int R1, int R2)
{
}
bool Pieza::comer(char symbol)
{
	if(symbol != ' ')
		return true;
	else
		return false;
}
Pieza* Pieza::move(int)
{
}
