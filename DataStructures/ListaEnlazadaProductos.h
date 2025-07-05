#ifndef DATASTRUCTURES_LISTAENLAZADAPRODUCTOS_H
#define DATASTRUCTURES_LISTAENLAZADAPRODUCTOS_H

#include "../Core/Productos.h"


void AgregarProductos(Producto*& cabeza, const Producto& producto);

void MostrarProductos(const Producto* cabeza); 
Producto* BuscarProductoID(Producto* cabeza, int id); 
void EliminarProducto(Producto*& cabeza, int id); 
void LiberarProductos(Producto*& cabeza); 














#endif //DATASTRUCTURES_LISTAENLAZADAPRODUCTOS_H