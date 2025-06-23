#ifndef LOGIC_USUARIOMANAGER_H
#define LOGIC_USUARIOMANAGER_H

#include "../Core/Usuario.h"
#include "../DataStructures/ArbolBinarioBusqueda.h"
#include <string>

struct UsuarioManager {

public:
    static void registrarUsuario(NodoABB*& raiz,
    const std::string& nombre,
    const std::string& apellido,
    const std::string& usuario,
    const std::string& contrasena,
    int id);

    Usuario* UsuarioManager::iniciarSesion(NodoABB* raiz, const std::string& usuario, const std::string& contrasena);
};

#endif // LOGIC_USUARIOMANAGER_H
