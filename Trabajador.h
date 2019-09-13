#ifndef TRABAJADOR_H
#define TRABAJADOR_H
#include <string>

class Trabajador {
private:
	std::string id;
	int horasLab;
	float precioHoras;
	int annosLaborads;

public:
	virtual Trabajador();
	virtual Trabajador(std::string,int,float,int);
	virtual ~Trabajador();
	virtual void setID(std::string);
	virtual void setHorasLab(int);
	virtual void setPrecioHoras(float);
	virtual void setAnnosLaborales(int);

	virtual std::string getID();
	virtual int getHorasLab();
	virtual float getPrecioHoras();
	virtual int getAnnosLaborales();

	virtual float calcularSalarioBase();
	virtual float calcularHorasExtra();
	virtual float calcularAnualidades();
	virtual float calcularSalarioBruto();
	virtual float calcularCargas();
	virtual float calcularSalarioNeto();
	virtual std::string toString();

};
#endif //TRABAJADOR_H