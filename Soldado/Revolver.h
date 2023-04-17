#pragma once
#include "Arma.h"
class Revolver:virtual public  Arma
{
private:
	string _nombre;
public:
	Revolver() :_nombre("Revolver") {}
	~Revolver() { cout << "se ejecuto esto" << endl; }
	string disparar() const { return "Pum..."; }
	string getNombre() const { return _nombre; }
};

