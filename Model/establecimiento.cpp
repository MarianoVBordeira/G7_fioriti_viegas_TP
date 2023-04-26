#include "establecimiento.h"

establecimiento::establecimiento(string nombre, string direccion, string horario_semana, string horario_sabado, string telefono) :nombre(nombre), direccion(direccion), horario_semana(horario_semana), horario_sabado(horario_sabado), telefono(telefono) {
    forward_list<articulos>* productos = new forward_list<articulos>;
}

string establecimiento::get_direccion() {
    return this->direccion;
}

string establecimiento::get_horario_semana() {
    return this->horario_semana;
}

/**
 * @return horario_sabado
 */
string establecimiento::get_horario_sabado() {
    return this->get_horario_sabado;
}

string establecimiento::get_nombre()
{
    return this->nombre;
}

string establecimiento::get_telefono()
{
    return this->telefono;
}

void establecimiento::set_productos(forward_list<articulos> productos) {
    this->productos = productos;
}

forward_list<articulos>::iterator establecimiento::buscar_articulo(string marca, string nombre)
{
    forward_list<articulos>::iterator it = find_if(this->productos.begin(), this->productos.end(), equal_to<marca> && equal_to<nombre>);
    return it;
}

void establecimiento::eliminar_articulo(articulos eliminado)
{
    this->productos.remove(eliminado);
}

forward_list<articulos> establecimiento::get_productos() {
    return this->productos;
}

establecimiento::~establecimiento() {
    delete[] this->productos;
}

void establecimiento::set_producto(articulos producto) {
    this->productos.push_front(producto);
}
