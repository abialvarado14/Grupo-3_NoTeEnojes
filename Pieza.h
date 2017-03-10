// Pieza.h

#ifndef PIEZA_H
#define PIEZA_H

class Pieza
{
	protected:
		int x;
		int y;
		char simbolo;
	public:
		Pieza();
		Pieza(int, int, char);
		
		void setX(int);
		int getX();
		void setY(int);
		int getY();
		void setSimbolo(char);
		char getSimbolo();
		
		virtual Pieza* ingresar(int, int); // retorna una nueva Pieza
		virtual bool zonaFinal(int, int); // recibe los valores aleatorios de los dados
		bool comer(char); // revisa si hay una Pieza en la posicion del tablero
		virtual Pieza* move(int);
};

#endif
