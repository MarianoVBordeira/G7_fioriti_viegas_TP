#include "librerias.h"
#include "articulos.h"
#include "establecimiento.h"
#include "cliente.h"
#include "carrito.h"
int main() {
	establecimiento::establecimiento("Lo de Juan", "Beruti", "9000", "1200", "27867139");

	
	articulos vajilla("Tramontina", "Cuchillo", 1000, 15); 
	articulos globos("Fiesta", "Globitos", 300, 28); 
	articulos disfraces("Disfrazate", "Batman", 2700, 8);
	articulos golosinas("Felfort", "Bombon", 100, 50); 
	articulos mantel("Mantelin", "Liso", 500, 12); 

	establecimiento::set_producto(vajilla);
	establecimiento::set_producto(globos);
	establecimiento::set_producto(disfraces);
	establecimiento::set_producto(golosinas);
	establecimiento::set_producto(mantel);

	cliente::cliente("Juan", "Mateos", "34278097", "jp@.com", "JPG");
	cliente::agregar_carrito(globos, 4);
	forward_list<articulos> lista;
	lista = carrito::get_productos();
	cout << lista; 
	establecimiento::~establecimiento();
	cliente::~cliente(); 
	carrito::~carrito();

	return 0; 
	


}