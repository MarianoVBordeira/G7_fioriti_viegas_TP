
#include "disfraces.h"

disfraces::disfraces(unsigned int precio, unsigned int stock):disfraces(precio,stock) {

}

talles disfraces::get_talles()
{
	return this->talle;
}

void disfraces::set_talle(talles talle){
	this->talle = talle;
}

disfraces::~disfraces() {

}