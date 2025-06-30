#ifndef  LOGIC_PREFERENCIASMANAGER_PREFERENCIASMANAGER_H
#define  LOGIC_PREFERENCIASMANAGER_PREFERENCIASMANAGER_H

#include "../../DataStructures/ListaEnlazadaPreferencias.h"  // Para Preferencias
#include "../../Core/Usuario.h"

    void AgregarPreferenciaUsuario(Preferencia* preferencia);
    void EliminarPreferenciaUsuario(Preferencia* preferencia);
    bool ValidarPreferenciaConCatalogo(Preferencia* prefencia);
    void MostrarPreferenciaUsuario(Preferencia* preferencia);
    void RecomendacionesPorPreferencias(Preferencia* preferencia);

#endif // DATASTRUCTURES_COLA_H