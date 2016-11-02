#include "Jugador.h"

Jugador::Jugador(): m_tipo('0'), m_score(0){

}

Jugador::Jugador(char tipo): m_tipo(tipo), m_score(0){

}

Jugador::~Jugador(){

}

void Jugador::repartir(carta c){
	m_score += c.valor();
}

void Jugador::reset(){
	m_score = 0;
}

int Jugador::puntos() const {
	return m_score;
}

char Jugador::tipo() const {
	return m_tipo;
}

//Jugador::

