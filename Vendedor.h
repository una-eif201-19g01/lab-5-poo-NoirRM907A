#ifndef VENDEDOR_H
#define VENDEDOR_H
#include<string>
class Trabajador;

class Vendedor {
private:
	float comision;
	int ventas;

public:
	virtual Vendedor();
	virtual Vendedor(float, int);
	virtual ~Vendedor();
	virtual void setComision(float);
	virtual void setVentas(int);

	virtual float getComisioc();
	virtual int getVentas();



};
#endif //VENDEDOR_H