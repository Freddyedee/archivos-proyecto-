#ifndef  LOGIC_BUSQUEDAMANAGER_BUSQUEDAMANAGER_H
#define  LOGIC_BUSQUEDAMANAGER_BUSQUEDAMANAGER_H

#include "../../DataStructures/ListaEnlazadaProductos.h"  // Para Preferencias
    Producto* BuscarProducto(Producto* cabeza, bool(*funcion)(Producto*, std::string*), std::string* criterio);
    bool BuscarPorMarca(Producto* producto, std::string criterio);
    bool BuscarPorCategoria(Producto* producto, std::string criterio);
    bool filtrarPorRangoPrecio(Producto* p, std::pair<float, float>* criterio);
    bool filtrarPorDescripcion(Producto* p, std::string* criterio);

#endif 