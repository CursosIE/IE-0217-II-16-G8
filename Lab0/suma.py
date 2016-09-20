#!/usr/bin/python
## @package suma
#  Script para sumar.
#
import sys
import math

## Esta función suma los elementos de una lista.
#  @param data la lista.
#  @return el resultado de la suma.
def sumar(data):
    result = 0.0;
    for i in data:
        result = result + i
    return result


if __name__ == "__main__":
    datos = [];
    for i in range(1, len(sys.argv)):
        datos.append(float(sys.argv[i]))

    print "Programa en Python"
    print "El resultado es: %f" % sumar(datos)


