#ifndef DATASTRUCTURES_LISTAENLAZADAPREFERENCIAS_H
#define DATASTRUCTURES_LISTAENLAZADAPREFERENCIAS_H

#include "../Core/Preferencias.h"
#include <string>


void AgregarPreferencia(Preferencia*& cabeza, const std::string& tipo, const std::string& valor); 
void mostrarPreferencias(Preferencia*& cabeza); 
void LiberarPreferencia(Preferencia*& cabeza); 
bool buscarPreferencia(const Preferencia* cabeza, const std::string& tipo, const std::string& valor); 
bool EliminarPreferencia(Preferencia*& cabeza, const std::string& tipo, const std::string& valor); 
int  ContarPreferencias(Preferencia*& cabeza);


#endif 