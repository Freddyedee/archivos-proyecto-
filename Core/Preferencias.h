#ifndef CORE_PREFERENCIAS_H
#define CORE_PREFERENCIAS_H

#include <string>

struct Preferencia {

    std::string tipo;   // "marca" o "categoria"
    std::string valor;  // Ej: "Samsung" o "Ropa"
    Preferencia* siguiente;
};

#endif
