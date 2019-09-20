#include "Gerente.h"

Gerente::Gerente(){}
Gerente::Gerente(float bono): bono(bono){}
Gerente::~Gerente(){}

void Gerente::setBono(float bono) {
	Vendedor::bono = bono;
}
float Gerente::getBono() {
	return bono;
}