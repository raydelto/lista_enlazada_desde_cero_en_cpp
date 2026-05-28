#include "Elemento.h"


Elemento::Elemento(std::string nombre): _nombre(nombre), _siguiente(nullptr)
{}

std::string Elemento::getNombre()
{
	return _nombre;
}

Elemento* Elemento::getSiguiente()
{
	return _siguiente;
}

void Elemento::setSiguiente(Elemento* elemento)
{
	_siguiente = elemento;
}

