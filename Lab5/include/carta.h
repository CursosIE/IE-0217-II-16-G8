#ifndef CARTA_H
#define CARTA_H

using namespace std;

class carta
{
    public:

      carta();
      carta(char symbol);

      virtual ~carta();

      int valor();

    private:

      int value;
      char symbol;
};

#endif // CARTA_H
