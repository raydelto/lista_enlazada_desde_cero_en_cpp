#pragma once

#include "Elemento.h"

class Lista
{
	public:
		Lista();
		void agregar(Elemento* elemento);
		Elemento* getPrimer();

	private:
		Elemento* _primer;
		Elemento* _ultimo;
};
