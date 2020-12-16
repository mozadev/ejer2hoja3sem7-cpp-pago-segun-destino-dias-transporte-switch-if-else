#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;
using namespace System;

int main()
{
	char Destino;
	char Transporte;
	int Dias;
	float aux;
	float Monto;
	do{
		do{
			cout << "Ingrese Destino (C: Cajamarca; T: Tacna; H: Huaraz; F: Fin): ";
			cin >> Destino;
		} while (Destino != 'C' && Destino != 'T' && Destino != 'H' && Destino != 'F');
		
		do{
			cout << "Ingrese Transporte (B: Bus; A: Avión): ";
			cin >> Transporte;
		} while (Transporte != 'B' && Transporte != 'A');

		cout << "Ingrese Dias: ";
		cin >> Dias;

		if (Destino != 'F')
		{
			switch (Destino)
			{
			case 'C':
				if (Transporte == 'B')
					aux = 165;
				else
					aux = 84 * 2.68;
				Monto = aux + Dias * 20 * 2.68;
				break;
			case 'T':
				if (Transporte == 'B')
					aux = 138;
				else
					aux = 133 * 2.68;
				Monto = aux + Dias * 30 * 2.68;
				break;
			case 'H':
				if (Transporte == 'B')
					aux = 63;
				Monto = aux + Dias * 30 * 2.68;
				break;
			}
			
			cout << "Monto a Pagar: " << Monto<<endl;
		}
	} while (Destino != 'F');

	getch();
	return 0;
}