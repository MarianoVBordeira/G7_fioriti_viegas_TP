
#ifndef _GOLOSINAS_H
#define _GOLOSINAS_H

#include "articulos.h"

class golosinas: public articulos {
public: 
    
golosinas(string tipo, string marca, unsigned int precio, unsigned int stock);
    
string get_marca();

string get_tipo();
    
~golosinas();
};

#endif //_GOLOSINAS_H