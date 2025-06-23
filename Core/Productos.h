#ifndef CORE_PRODUCTO_H
#define CORE_PRODUCTO_H

#include <string>

struct Producto {
    int idProducto;
    int calidad;   // Escala de 1 a 5
    int precio;
    std::string marca;
    std::string categoria;
};

#endif // CORE_PRODUCTO_H
