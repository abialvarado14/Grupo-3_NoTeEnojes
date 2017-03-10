#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

//void ImprimirMatriz(char[][]);
int Dados();


int main(){

	int colorj1, colorj2, contj1=0,contj2=0;
	char tablero[15][15];
	bool juegoOn = true;
	bool Gamer1 = true;
	bool Gamer2 = false;

	cout << "              NO TE ENOJES!!      " << endl;
	cout << "Ingrese el color que desea Jugador 1\n1.Rojo\n2.Verde\n3.Azul\n4.Amarilla:";
	cin >> colorj1;
	cout << "Ingrese el color que desea Jugador2 1\n1.Rojo\n2.Verde\n3.Azul\n4.Amarilla:";
	cin >> colorj2;

	//VALIDACION DEL MISMO COLOR
	while (colorj1==colorj2){
		cout << "Jugador 2, Usted escogio el mismo color que el jugador 1, Ingrese otro color: 1\n1.Rojo\n2.Verde\n3.Azul\n4.Amarillo:";
		cin >> colorj2;
	}

	for (int i = 0; i < 15; ++i)
		{
		for (int j = 0; j < 15; ++j)
		{
			tablero[i][j]= ' ';
		}
		}

	//TODO LLAMAR LOS METODOS DE LAS PIEZAS, PARA CADA COLOR
/*
	switch(colorj1){
		case 1://COLOR ROJO

		break;

		case 2://COLOR VERDE

		break;

		case 3://COLOR ZUL

		break;

		case 4://COLOR AMARILLO

		break;
	}*/

	while (juegoOn == true){


		if (Gamer1==true){
			cout << "Jugador 1 Tira los dados y el numero de los dados es:";
			
			int d1 = Dados();
			int d2 = Dados();
			cout << d1 <<" y " << d2;
			Gamer1=false;
			Gamer2=true;

		}else if(Gamer2==true){
			
			cout << "Jugador 2 Tira los dados";
			Gamer1=true;
			Gamer2=false;

			
		}
			//TODO HACER EL LLAMADO DEL METODO PARA SABER SI LLEGO AL FINAL Y AUMENTAR EL CONTADOR

		//VALIDACION SI EL JUGADOR GANO..
		if (contj1==4){
			cout << "FIN DEL JUEGO GANO EL JUGADOR 1, FELICIDADES!";
			juegoOn = false;			
		}
		if (contj2==4){
			cout << "FIN DEL JUEGO GANO EL JUGADOR 2, FELICIDADES!";
			juegoOn = false;
		}


	}



	return 0;
}


/*void ImprimirMatriz(char[][] Matriz){
	char tablero[15][15];
	for (int i = 0; i < 15; ++i)
	{
		for (int j = 0; j < 15; ++j)
		{
			cout << "[ " << tablero[i][j] << "]" << " ";
		}
		cout << endl;
	}
}*/

int Dados(){
	int dados;
	dados = rand()%7+1;

return dados;
}
