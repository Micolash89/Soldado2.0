#pragma once
#include "Arma.h"
class Rifle:virtual public Arma
{
private:
	string _nombre;
public:	
	Rifle() :_nombre("Rifle") {}
	~Rifle() {}
	string disparar() const { return " Pum pum pum...";}
	string getNombre() const { return _nombre; }
};

