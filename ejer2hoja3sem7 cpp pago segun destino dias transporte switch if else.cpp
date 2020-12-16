#include<iostream>
#include<conio.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>



using namespace std;

int c30 = 0;//contador hotel de 30
int chz = 0;//contador huaraz
float ibus = 0;//total soles en bus
float iavion = 0;//ingreso total avion
float itotal = 0;






char ingresadestino()
{

	char d;

	cout << "ingrese destino c|T|h|f "; cin >> d;
	while (d != 'c'&&d != 'T'&&d != 'h'&&d != 'f')
	{
		cout << "ingrese destino c | T | h | f "; cin >> d;
	}
	return d;
}



char transporte()
{

	char t;
	cout << "ingrese transporte b|a "; cin >> t;
	while (t != 'b'&& t != 'a')
	{
		cout << "ingrese destino b|a "; cin >> t;
	}
	return t;
}



int ingresedias()
{

	int dias;
	cout << "ingrese dias viaje "; cin >> dias;
	while (dias <= 2 || dias> 30)
	{
		cout << "ingrese dias viaje "; cin >> dias;
	}
	return dias;
}

void estadistica(int cant)
{

	cout << "cantidad de viajes hotel $30: " << c30 << endl;
	cout << "% de viajes eligiereon huaraz: " << chz * 100 / cant << endl;
	cout << "ingreso total por bus: " << ibus << endl;
	cout << "ingreso total $ avion: " << iavion << endl;
	cout << "ingreso total: " << itotal << endl;

}



float calculapago(char d, char t, int dias)
{

	float pago = 0;
	switch (d)
	{
	case 'c':
		if (t == 'b')
		{
			pago = 165;
			ibus = ibus + 165;
			
		}
		if (t == 'a')
		{
			pago = 84 * 2.68;
			iavion = iavion + 84 * 2.68;
		}
		pago = pago + dias * 20 * 2.68;
		break;

	case 'T':
		if (t == 'b')
		{
			pago = 138;
			ibus = ibus + 138;
			c30 = c30 + 1;
		}
		if (t == 'a')
		{
			pago = 133 * 2.68;
			iavion = iavion + 133 * 2.68;
			c30 = c30 + 1;
		}
		pago = pago + dias * 30 * 2.68;
		
		break;

	case 'h':

		
			pago = 63;
			ibus = ibus + 63;
			chz = chz + 1;
			c30 = c30 + 1;
		
		pago = pago + dias * 30 * 2.68;
	
		break;

	}
	itotal = itotal + pago;
	return pago;

}



int main()
{
	char d, t;
	int dias;
		int cantidad = 0;
	do
	{
		d = ingresadestino();
		if (d == 'f')
			break;
		
		if (d == 'c' || d == 'T')
		{
			t = transporte();
			dias = ingresedias();
		}
		else dias = ingresedias();

		cout << "el monto a pagar:" << calculapago(d, t, dias) << endl;
		cantidad = cantidad + 1;
	} while (d != 'f');
	estadistica(cantidad);


	_getch();
}

