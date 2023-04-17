#pragma once
#include<iostream>
#include<string>
using namespace std;
class Arma
{
private:
	string _nombre;
public:
	Arma() {};
	~Arma() {};
	virtual string disparar() const { return "disparar"; };
	virtual string getNombre() const { return "NJOMBRE"; };
};

