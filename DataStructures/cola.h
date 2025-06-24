#ifndef  DATASTRUCTURE_COLA_H
#define DATASTRUCTURE_COLA_H

#include "../Core/Historial.h"  // Para Historial y NodoHistorial
#include "../Core/Productos.h"  // Para Producto

struct ColaHistorial {
    // Métodos que reciben un Historial* para modificarlo
    static void encolar(Producto* producto, Historial* historialUsuario);
    static void desencolar(Historial* historialUsuario);
    static bool estaVacia(const Historial* historialUsuario);
};

#endif // DATASTRUCTURES_COLA_H