#include "Lista.h"
#include <iostream>

using namespace std;

int main()
{
	Lista lista;
	Elemento cancion1("Canción #1");
	Elemento cancion2("Canción #2");
	Elemento cancion3("Canción #3");

	lista.agregar(&cancion1);
	lista.agregar(&cancion2);
	lista.agregar(&cancion3);

	Elemento *i = lista.getPrimer();

	while(i != nullptr)
	{
		cout << i->getNombre() << endl;
		i = i->getSiguiente();
	}
}

