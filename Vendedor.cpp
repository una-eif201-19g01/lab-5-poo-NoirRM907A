#include "Vendedor.h"

Vendedor::Vendedor(){}
Vendedor::Vendedor(float comision, int ventas): comision(comision), ventas(ventas){}

Vendedor::~Vendedor(){}

void Vendedor::setComision(float comision) {
	Vendedor::comision = comision;
}
void Vendedor::setVentas(int ventas) {
	Vendedor::ventas=ventas;
}

float Vendedor::getComision(){
	return comision;
}
float Vendedor::getVentas(){
	return ventas;
}
////