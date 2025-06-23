#ifndef CORE_USUARIO_H
#define CORE_USUARIO_H

#include "Preferencias.h"
#include "Historial.h"
#include <string>

struct Usuario {
    std::string nombre;
    std::string apellido;
    std::string usuario;
    std::string contrasena;
    int idUsuario;

    Preferencia* preferencias; // ← esto va cuando definas la estructura
    Historial* historial;
};

#endif // CORE_USUARIO_H
