#ifndef CORE_HISTORIAL_H
#define CORE_HISTORIAL_H

#include "Productos.h"

struct Historial {
    Productos* producto;
    Historial* siguiente;
};

#endif // CORE_HISTORIAL_H
