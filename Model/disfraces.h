
#ifndef _DISFRACES_H
#define _DISFRACES_H

#include "articulos.h"
#include "talles.h"


class disfraces: public articulos {
public: 
    
disfraces(unsigned int precio, unsigned int stock);

talles get_talles();

void set_talle(talles talle);
    
~disfraces();
private: 
    talles talle;
};

#endif //_DISFRACES_H