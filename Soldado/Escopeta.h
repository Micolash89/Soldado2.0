#pragma once
#include "Arma.h"
class Escopeta:virtual public Arma
{
private:
	string _nombre;
public:
	Escopeta() :_nombre("Escopeta") {}
	~Escopeta() {}
	string disparar() const { return "Paaa!!!..."; }
	string getNombre()const { return _nombre; }
};

