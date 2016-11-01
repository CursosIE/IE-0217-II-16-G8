#ifndef CARTA_H
#define CARTA_H

#include <iostream>

using namespace std;

class carta
{
    public:

      carta();
      carta(char symbol);

      virtual ~carta();

      int valor();


    private:
      friend std::ostream& operator<<(std::ostream& stream, const carta& c);

      int value;
      char symbol;
};

#endif // CARTA_H
