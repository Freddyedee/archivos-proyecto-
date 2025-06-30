#ifndef DATASTRUCTURES_LISTAENLAZADAPREFERENCIAS_H
#define DATASTRUCTURES_LISTAENLAZADAPREFERENCIAS_H

#include "../Core/Preferencias.h"
#include <string>


void AgregarPreferencia(Preferencia* preferencia); 
void mostrarPreferencias(Preferencia* preferencia); 
void LiberarPreferencia(Preferencia* preferencia); 
bool buscarPreferencia(Preferencia* preferencia); 
bool EliminarPreferencia(Preferencia* preferencia); 
int  ContarPreferencias(Preferencia* preferencia);


#endif //DATASTRUCTURES_LISTAENLAZADA_H