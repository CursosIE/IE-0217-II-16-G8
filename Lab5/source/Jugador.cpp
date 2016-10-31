#include "Jugador.h"

Jugador::Jugador(): m_tipo('\0'), m_score(0){

}

Jugador::Jugador(char tipo): m_tipo(tipo), m_score(0){

}

void Jugador::repatir(carta c){
	m_score += c.valor();

void Jugador::reset(){
	m_score = 0;
}

int Jugador::suma() const {
	return m_score;
}

//Jugador::

