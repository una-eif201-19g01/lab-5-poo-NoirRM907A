#ifndef GERENTE_H
#define GERENTE_H
#include<iostream>
class Gerente {
private:
	float bono;

public:
	virtual Gerente();
	virtual Gerente(float);
	virtual ~Gerente();
	virtual void setBono(float);
	virtual float getBono();

};
#endif //GERENTE_H
