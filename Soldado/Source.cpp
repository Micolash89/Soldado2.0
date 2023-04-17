#include <iostream>
#include "Arma.h"
#include "Menu.h"
#include "Soldado.h"
#include <stdlib.h>
#include "Revolver.h"
#include "Escopeta.h"
#include "Rifle.h"

int main() {
	Menu menu;
	Soldado mambru = Soldado();
	char opc1,opc2;
	Escopeta* escopeta = new Escopeta();
	Rifle* rifle = new Rifle();
	Revolver* revolver = new Revolver();


	do {
		system("cls");
		menu.menuPrincipal();
		cin >> opc1;

		switch (opc1)
		{
		case '1':
			menu.menuArma();
			cin >> opc2;
			switch (opc2)
			{
			case '1':
				mambru.recogerArma(escopeta);
				break;
			case '2':
				mambru.recogerArma(rifle);
				break;
			case '3':
				mambru.recogerArma(escopeta);
				break;
			case 'x':
			case 'X':
				cout << "Adios" << endl;
				break;
			default:
				cout << "Opcion incorrecta" << endl;
			}
			break;
		case '2':
			mambru.DejarArma();
			break;
		case '3':
			mambru.disparar();
			break;
		case '4':
			mambru.verArma();
			break;
		case 'X':
		case 'x':
			cout << "Adios" << endl;
			break;
		default:
			cout << "Opcion incorrecta" << endl;
		}
		cout << "presione enter" << endl;
		cin.get();
		cin.get();
	} while (opc1 != 'X' && opc1 != 'x');

	delete escopeta;
	delete revolver;
	delete rifle;

	return 1;
}