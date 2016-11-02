#include "Mesa.h"

Mesa::Mesa()
{

}

Mesa::~Mesa()
{

}

void Mesa::sentar(const char &jugador)
{
	jugadores.push_back(Jugador(jugador));
}

void Mesa::play()
{
	inicializar();
	while (!gameover()) {
		for (auto it = jugadores.begin(); it != jugadores.end(); it++) {
			if (it->puntos() < 19) {
				it->repartir(maso.pop());
				//maso.pop();
			}
		}
	}
}

void Mesa::echar()
{
	for (auto it = jugadores.begin(); it != jugadores.end(); it++) {
		if (it->puntos() > 21) {
			it = jugadores.erase(it);
			it--;
		}
	}
}

int Mesa::num_jugadores() const
{
	return jugadores.size();
}

bool Mesa::llena() const
{
	return jugadores.size() > 2;
}

void Mesa::imprimir() const
{
	std::cout << std::endl;
	std::cout << "Mesa con " << num_jugadores() << " jugadores";
	int i = 1;
	for (auto it = jugadores.begin(); it != jugadores.end(); it++) {
		std::cout << "Jugador " << i << ": " << it->puntos() << " puntos" << std::endl;
		i++;
	}
	std::cout << std::endl;
}

void Mesa::inicializar()
{
	maso.llenar();
	maso.Shuffle();
	for (auto it = jugadores.begin(); it != jugadores.end(); it++) {
		it->reset();
	}
}

bool Mesa::gameover() const
{
	if (num_jugadores() == 0)
		return true;

	for (auto it = jugadores.begin(); it != jugadores.end(); it++) {
		if (it->puntos() < 19) {
			return false;
		}
	}
	return true;
}
