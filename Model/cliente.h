

#ifndef _CLIENTE_H
#define _CLIENTE_H

#include "persona.h"
#include "carrito.h"
#include "medio_de_pago.h"
#include "establecimiento.h"


class cliente: public persona {
public: 
    
cliente(string nombre, string apellido,string dni, string mail, string JPG);
    
unsigned int pagar(unsigned int precio);
    
void solicitar_impresion();
    
void agarrar_numero(unsigned int numero);
    
void reservar_disfraz();
    
void agregar_carrito(string nombre, string marca, unsigned int cant);
    
void set_medio_pago(medio_de_pago medio_pago);
    
void set_dinero(unsigned int dinero);
    
void set_disfraz(bool disfraz);
    
void set_dias_alquilando(unsigned int dias);
    
string get_mail();

medio_de_pago get_medio_pago();
    
unsigned int get_numero_orden();
    
unsigned int get_cant_dinero();
    
string get_JPG();
    
bool get_disfraz();
    
unsigned int get_dias_alquilando(); 
    
~cliente();
private: 
    unsigned int numero_orden;
    string const mail;
    medio_de_pago medio_pago;
    unsigned int cant_dinero;
    string const JPG;
    unsigned int cant_productos;
    unsigned int monto_total;
    bool disfraz;
    unsigned int dias_alquilando;
    carrito miCarrito;
};

#endif //_CLIENTE_H