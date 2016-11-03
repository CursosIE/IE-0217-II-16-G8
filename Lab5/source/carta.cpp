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
        value = (int) (symb - '0');     
    } else if (symb == 'J' || symb == 'Q' || symb == 'K') {
        value = 10;
    } else if (symb == 'A') {
        value = 11;
    } else if(symb == 'X')
					value = 10;

		 			else{
        		cerr << "Not a valid card value" << endl;
    }
}

carta::~carta()
{
    //dtor
}

int carta::valor()
{
    return value;
}
