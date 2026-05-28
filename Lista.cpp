#include "Lista.h"


Lista::Lista(): _primer(nullptr), _ultimo(nullptr)
{}

void Lista::agregar(Elemento* elemento)
{
	if(_primer == nullptr) // la lista está vacía
	{
		_primer = elemento;
	}
	else
	{
		_ultimo->setSiguiente(elemento);
	}

	_ultimo = elemento;
}


Elemento* Lista::getPrimer()
{
	return _primer;
}

