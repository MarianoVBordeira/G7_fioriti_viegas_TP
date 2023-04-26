
#ifndef _GLOBOS_H
#define _GLOBOS_H

#include "cumpleanios.h"


class globos: public cumpleanios {
public: 

globos(string color, unsigned int stock, unsigned int precio, string tamanio);
      
~globos();
};

#endif //_GLOBOS_H