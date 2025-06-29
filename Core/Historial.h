#ifndef CORE_HISTORIAL_H
#define CORE_HISTORIAL_H

#include "Productos.h"

// Nodo para la lista enlazada del historial
const int TAMANO_COLA = 15;

struct Historial{
    int cola[TAMANO_COLA];
    int frente = 0;
    int final = -1; // Inicializamos 'final' a -1 para una cola vacia
    int elementos = 0;
};

/*
struct NodoHistorial {
    Producto* producto;          // Puntero al producto
};

// Estructura principal del historial (lista enlazada)
struct Historial {
    NodoHistorial* primero;      // Puntero al primer nodo
    int cantidad;                // Contador de elementos

};*/

#endif // CORE_HISTORIAL_H