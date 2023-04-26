
#include "cliente.h"

cliente::cliente(string nombre, string apellido,string dni, string mail, string JPG): persona(nombre, apellido,dni),mail(mail),JPG(JPG){
    carrito* micarrito = new carrito();
}

unsigned int cliente::pagar(unsigned int precio) { //cosultar la relacion entre encargado y cliente, metodos de pagar y cobrar
    unsigned int aux = precio;
    return aux;
}

void cliente::solicitar_impresion() {
    return;
}

void cliente::agarrar_numero(unsigned int numero) {
    this->numero_orden = numero;
    return;
}

void cliente::reservar_disfraz() { //preguntar
    return;
}

void cliente::agregar_carrito(string nombre, string marca, unsigned int cant)
{

    int contador = 0;
    while (contador != cant) {
        forward_list<articulos >::iterator it = establecimiento::buscar_articulo;
        contador++;
        if (contador == cant) {
            this->miCarrito.set_productos((*it));
            this->miCarrito.set_cant(cant);
            this->miCarrito.set_monto((*it).get_precio())
        }
        establecimiento::eliminar_articulo((*it));
    }
    return;
}

/*void cliente::agregar_carrito(unsigned int precio, unsigned int cant, string nombre) { //preguntar relaciones
    return;
}
*/
void cliente::set_medio_pago(medio_de_pago medio_pago) {
    this->medio_pago = medio_pago;
    return;
}

void cliente::set_dinero(unsigned int dinero) {
    this->cant_dinero = dinero;
    return;
}

void cliente::set_disfraz(bool disfraz) {
    this->disfraz = disfraz;
    return;
}

void cliente::set_dias_alquilando(unsigned int dias) {
    this->dias_alquilando = dias;
    return;
}

string cliente::get_mail() {
    return this->mail;
}

medio_de_pago cliente::get_medio_pago(){
    return this->medio_pago;
}

unsigned int cliente::get_numero_orden() {
    return this->numero_orden;
}

unsigned int cliente::get_cant_dinero() {
    return this->cant_dinero;
}

string cliente::get_JPG() {
    return this->JPG;
}

bool cliente::get_disfraz() {
    return this->disfraz;
}

unsigned int cliente::get_dias_alquilando() {
    return this->dias_alquilando;
}

cliente::~cliente() {
    delete[] this->miCarrito; 
}