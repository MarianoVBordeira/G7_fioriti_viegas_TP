
#include "articulos.h"


articulos::articulos(string marca, string nombre, unsigned int precio, unsigned int stock): marca(marca), nombre(nombre), {
    this->precio = precio;
    this->stock = stock;
}

unsigned int articulos::get_precio() {
    return this->precio;
}

unsigned int articulos::get_stock() {
    return this->stock;
}

string articulos::get_marca()
{
    return this->marca;
}

string articulos::get_nombre()
{
    return this->nombre;
}

void articulos::set_precio(unsigned int precio) {
    cout << this->precio << " pesos" << endl;
    return;
}

void articulos::set_stock(unsigned int stock) {
    cout << this->stock << " unidades" << endl;
    return;
}

articulos::~articulos() {

}