
#include "carrito.h"

carrito::carrito(unsigned int monto_total, forward_list<articulos> producto, unsigned int cant_productos) {
    this->monto_total = monto_total;
    this->productos = producto;
    this->cant_productos = cant_productos;
}

carrito::carrito() {
    this->monto_total = 0;
    this->productos = null;
    this->cant_productos;
}
carrito::~carrito() {

}

void carrito::set_monto(unsigned int monto)
{
    this->monto_total;
}

void carrito::set_productos(forward_list<articulos> productos)
{
    this->productos;
}

void carrito::set_productos(articulos productos)
{
    this->productos.push_front(1);
    this->productos.assign(1, productos);
}

void carrito::set_cant(unsigned int cant_productos)
{
    this->cant_productos;
}

unsigned int carrito::get_monto() {
    return this->monto_total;
}
forward_list<articulos> carrito::get_productos() {
    return this->productos;
}

unsigned int carrito::get_cant() {
    return this->cant_productos;
}