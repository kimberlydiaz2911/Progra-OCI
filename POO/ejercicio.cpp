#pragma one 
#include <iostream>

class MetodoPago {

public: 
    virtual void pagar (double monto) = 0; 
    virtual ~MetodoPago (){}

}; 

class Efectivo : public MetodoPago{



};