#pragma once
#include "Arma.h"

class Soldado
{
private:
	Arma* _arma;
public:
	Soldado() :_arma( NULL) {}
	~Soldado() {}
	void disparar() const;
	void recogerArma(Arma *arma);
	void DejarArma();
	void verArma() const;
};

