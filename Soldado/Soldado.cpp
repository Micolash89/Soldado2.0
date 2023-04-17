#include "Soldado.h"
void Soldado::recogerArma(Arma* arma) {
	if (_arma!=NULL)
		cout << "Parece que el soldado tiene un arma" << endl;
	else {
		_arma = arma;
		cout << "Arma equipada" << endl;
	}
}

void Soldado::disparar() const {

	cout << ((_arma==NULL) ?"Parece que el soldado no tiene nungun arma en sus manos" :_arma->disparar() ) << endl;
}

void Soldado::DejarArma() {
	if (_arma==NULL)
		cout << "El soldado ya habia dejodo su arma" << endl;
	else {
		_arma = NULL;
		cout << "El soldado dejo su arma" << endl;
	}
}

void Soldado::verArma() const {

	cout << ((_arma==NULL) ?"el soldado no tiene ningun arma" :_arma->getNombre()) << endl;
}