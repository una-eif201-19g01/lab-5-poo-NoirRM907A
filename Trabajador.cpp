#include"Trabajador.h"
#include<iostream>
#include<string>

Trabajador::Trabajador() {};
Trabajador::Trabajador(std::string id, int horasLab, float precioHoras,int annosLaborales): horasLab(horasLab), precioHoras(precioHoras), annosLaborales(annosLaborales){}

Trabajador::~Trabajador(){}

void Trabajador::setID(std::string id) {
	Trabajador::id = id;
}
void Trabajador::setHorasLab(int horasLab) {
	Trabajador::horasLab = HorasLab;
}
void Trabajador::setPrecioHoras(float precioHoras) {
	Trabajador::precioHoras = precioHoras;
}
void Trabajador::setAnnosLaborales(int annosLaborales) {
	Trabajador::annosLaborales = annosLaborales;
}

std::string Trabajador::getID() {
	return id;
}
int Trabajador::getHorasLab() {
	return horaLab;
}
float Trabajador::getPrecioHoras() {
	return precioHoras;
}
int Trabajador::getAnnosLaborales() {
	return annosLaborales;
}

float Trabajador::calcularSalarioBase(){} 

float Trabajador::calcularHorasExtra(){}

float Trabajador::calcularAnualidades(){}

float Trabajador::calcularSalarioBruto(){}

float Trabajador::calcularCargas(){}

float Trabajador::calcularSalarioNeto(){}

std::string Trabajador::toString(){}