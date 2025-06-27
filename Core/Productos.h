#ifndef CORE_PRODUCTO_H
#define CORE_PRODUCTO_H

#include <string>

struct Producto {
    
    std::string descripcion;
    std::string marca;
    std::string categoria;
    int id;
    float precio;
    int calidad; // Rango de 1 a 5

    Producto* siguiente = nullptr; // Lista enlazada simple
};

#endif // CORE_PRODUCTO_H
