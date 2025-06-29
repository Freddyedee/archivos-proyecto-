#ifndef LOGIC_HISTORIALMANAGER_HISTORIALMANAGER_H
#define LOGIC_HISTORIALMANAGER_HISTORIALMANAGER_H

#include "../../DataStructures/ColaHistorial.h"

void AgregarAlHistorial(Historial* historialusuario, Producto* Producto);
void MostrarHistorial(Historial historialusuario);
void LimpiarHistorial(Historial* historialusuario);
void RecomendacionesPorHistorial(Historial* historialusuario);
#endif // CORE_HISTORIAL_H