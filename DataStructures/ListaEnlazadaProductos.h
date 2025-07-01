#ifndef DATASTRUCTURES_LISTAENLAZADAPRODUCTOS_H
#define DATASTRUCTURES_LISTAENLAZADAPRODUCTOS_H

#include "../Core/Productos.h"


void AgregarProductos(Producto*& cabeza, const std::string& descripcion, const std::string& marca,
                      const std::string& categoria, int id, float precio, int calidad);

void MostrarProductos(const Producto* cabeza); 
Producto* BuscarProductoID(Producto* cabeza, int id); 
void EliminarProducto(Producto*& cabeza, int id); 
void LiberarProductos(Producto*& cabeza); 














#endif //DATASTRUCTURES_LISTAENLAZADAPRODUCTOS_H