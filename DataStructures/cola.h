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

//para las funciones de la cola la estructura es 
/*
encolar(Cafetera, Usuario.historial) // esto lo que va a hacer es añadir el producto a la cola de Historial
desencolar(Usuario.historial)// como vamos a usar el historial completo y leerlo para usarlo en las preferencias, me parece prudente tener un tamaño para la cola de historial, 
                            //por ej: la cola es de tamaño 5 y solo vamos a guardar los ultimos 5 productos.abort
estavacia(Usuario.historial)//puede funcionar para hacer validaciones si historial esta vacio

*/
#endif // DATASTRUCTURES_COLA_H