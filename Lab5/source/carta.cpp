#include "carta.h"
#include <iostream>


carta::carta()
{
    //ctor
}

carta::carta(char symb)
{

   if(int(symb) > 1 && int(symb) < 11 ){
      value = int(symb);
      }
    else if(symb == 'J' || symb == 'Q' || symb == 'K'){
            value = 10;
          }
      else if(symb == 'A'){
              value = 11;
            }
        else cerr << "Not valid card value" << endl;

  }

carta::~carta()
{
    //dtor
}
