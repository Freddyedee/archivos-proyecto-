#ifndef CORE_HISTORIAL_H
#define CORE_HISTORIAL_H

#include "Productos.h"

//Lista enlazada para el historial.
struct Historial {
    Producto* producto;
    Historial* siguiente;
};

#endif // CORE_HISTORIAL_H
