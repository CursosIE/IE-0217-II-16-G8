#include "carta.h"
#include <iostream>

std::ostream& operator<<(std::ostream& stream, const carta& c){
	return stream << c.symbol;
}

carta::carta(): value(0), symbol('0')
{
    //ctor
}

carta::carta(char symb): symbol(symb)
{

    if ( symb >= '1' && symb <= '9') {  // Aqui se compara el codigo ASCII, que es lo que en verdad guardan los chars.
        value = (int) (symb - '0');     // Ojo la sintaxis, eso se llama un typecast, lo que ud hizo fue como llamar a un constructor, no está bien pero el compilar lo medio entiende.
    } else if (symb == 'J' || symb == 'Q' || symb == 'K') {
        value = 10;
    } else if (symb == 'A') {
        value = 11;
    } else if(symb == 'X')
					value = 10;

		 			else{
        		cerr << "Not a valid card value" << endl;
    }
    //  Hay un problema con esa forma de guarda la carta y es que un 10 no se puede guardar como un solo
    //  character por obvias razones. Entonces si su idea era usar chars para que fuera mas facil de
    //  imprimir o algo así, no va a funcionar tan bien. xD

}

carta::~carta()
{
    //dtor
}

int carta::valor()
{
    return value;
}
