#include "librerias.h"

#ifndef _ARTICULOS_H
#define _ARTICULOS_H

class articulos {
public:

    articulos(string marca, string nombre, unsigned int precio, unsigned int stock);

    unsigned int get_precio();

    unsigned int get_stock();

    string get_marca();

    string get_nombre();

    void set_precio(unsigned int precio);

    void set_stock(unsigned int stock);

    ~articulos();

protected:
    unsigned int precio;
    unsigned int stock;
    const string marca;
    const string nombre;

};
#endif //_ARTICULOS_H