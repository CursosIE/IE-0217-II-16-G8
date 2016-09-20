/** @file ARN.cpp
 *  Programa que traduce una cadena de ARN en la correspondiente
 *  cadena de aminoácidos.
 */
#include "ARN.h"
#include <iostream>
#include <string>

using namespace std;

int main(int argc, char* argv[]) {
	if(!checkeoArgumentos(argc, argv)){
		cerr << "Error de argumentos" << endl;
		cerr << "Uso: " << argv[0] << " <cadena>" << endl;
		cerr << "La cadena debe tener una cantidad de caracteres que sea multiplo de 3, caracteres validos: AGCU." << endl;
		cerr << "Ademas debe ser escrita en mayuscula, por ejemplo: UAGCUG." << endl;
		return 1;
	}

	int base_num = char_traits<char>::length(argv[1]);

	char *amino;
	amino = traducirARNaAA(argv[1], base_num);
	imprimirArregloDeChar(amino, base_num/3);

	delete[] amino;
	return 0;
}

/**
 * Retorna un arreglo de caracteres con la traduccion 
 * a aminoacidos de una cadena de ARN. Reserva la memoria
 * necesaria automáticamente, el usuario es responsable de liberarla.
 * @param orig Arreglo de caracteres que representa la cadena de ARN.
 * @param size Tamaño de orig.
 * @return La cadena de aminoacidos, la funcion reserva el nuevo espacio de memoria.
 */
char* traducirARNaAA(char* orig, int size){
	char *p;
	p = new char[size/3 + 1];

	int j = 0;
	for (int i = 0; i < size; i+= 3) {
		p[j] = nextSeq(orig + i);
		j++;
	}
	p[size/3] = '\0';
	return p;
}


/**
 * Esta función se encarga de imprimir cierto número de caracteres de un string.
 * @param str Puntero a la cadena de caracteres.
 * @param num Número de caracteres a imprimir.
 */
void imprimirArregloDeChar(char *str, int num){
	for (int i = 0; i <num; i++) {
		if (str[i]=='\0')
			return; 
		else
			cout << str[i];
	}
	cout << endl;
	return;
}

/**
 * Revisa los argumentos que recibe el programa.
 * @param argc Cantidad de argumentos.
 * @param argv Argumentos.
 * @return Si los argumentos son válidos retorna verdadero.
 */
bool checkeoArgumentos(int argc, char* argv[]){
	if (argc != 2)
		return false;
	if ((char_traits<char>::length(argv[1]) % 3) != 0){
		// cout << (char_traits<char>::length(argv[1]) % 3) << endl;
		return false;
	}
	return true;
}

/**
 * Recibe un grupo de 3 caracteres correspondientes a 
 * un codón y los traduce a un áminoacido.
 * @param sub Puntero al primer caracter.
 * @return Caracter que representa al aminoácido traducido.
 */
char nextSeq(char* sub) {
	if (sub[0] == 'U') {

		if (sub[1] == 'U') {
			if (sub[2] == 'U') {
				// "UUU"
				return 'F';
			} else if (sub[2] == 'C') {
				// "UUC"
				return 'F';
			} else if (sub[2] == 'A') {
				// "UUA"
				return 'L';
			} else if (sub[2] == 'G') {
				// "UUG"
				return 'L';
			} else {
				return '2';
			}
		} else if (sub[1] == 'C') {
			// "UC*"
			return 'S';
		} else if (sub[1] == 'A') {
			if (sub[2] == 'U') {
				// UAU";
				return 'Y';
			} else if (sub[2] == 'C') {
				return 'Y';
			} else if (sub[2] == 'A') {
				return '|';
			} else if (sub[2] == 'G') {
				return '|';			
			} else {
				return '2';
			}
		} else if (sub[1] == 'G') {
			// UG*
			if (sub[2] == 'U') {
				return 'C';
			} else if (sub[2] == 'C') {
				return 'C';
			} else if (sub[2] == 'A') {
				return '|';
			} else if (sub[2] == 'G') {
				return 'W';
			} else {
				return '2';
			}	
		} else {
			return '1';
		}

	} else if (sub[0] == 'C') {
	
		if (sub[1] == 'U') {

			// CU*
			return 'L';

		} else if (sub[1] == 'C') {
			
			// CC*
			return 'P';

		} else if (sub[1] == 'A') {
			if (sub[2] == 'U') {
				return 'H';
			} else if (sub[2] == 'C') {
				return 'H';
			} else if (sub[2] == 'A') {
				return 'Q';
			} else if (sub[2] == 'G') {
				return 'Q';
			} else {
				return '2';
			}
		} else if (sub[1] == 'G') {

			// CG*
			return 'R';

		} else {
			return '1';
		}

	} else if (sub[0] == 'A') {	

		if (sub[1] == 'U') {
			if (sub[2] == 'U') {
				return 'I';
			} else if (sub[2] == 'C') {
				return 'I';
			} else if (sub[2] == 'A') {
				return 'I';
			} else if (sub[2] == 'G') {
				return 'M';
			} else {
				return '2';
			}
		} else if (sub[1] == 'C') {
			
			// AC*
			return 'T';

		} else if (sub[1] == 'A') {
			// AA*
			if (sub[2] == 'U') {
				return 'N';
			} else if (sub[2] == 'C') {
				return 'N';
			} else if (sub[2] == 'A') {
				return 'K';
			} else if (sub[2] == 'G') {
				return 'K';
			} else {
				return '2';
			}
		} else if (sub[1] == 'G') {
			// AG*
			if (sub[2] == 'U') {
				return 'S';
			} else if (sub[2] == 'C') {
				return 'S';
			} else if (sub[2] == 'A') {
				return 'R';
			} else if (sub[2] == 'G') {
				return 'R';
			} else {
				return '2';
			}
		} else {
			return '1';
		}

	} else if (sub[0] == 'G') {
		
		if (sub[1] == 'U') {

			// GU*
			return 'V';

		} else if (sub[1] == 'C') {

			// GC*
			return 'A';

		} else if (sub[1] == 'A') {
			// GA*
			if (sub[2] == 'U') {
				return 'D';
			} else if (sub[2] == 'C') {
				return 'D';
			} else if (sub[2] == 'A') {
				return 'E';
			} else if (sub[2] == 'G') {
				return 'E';
			} else {
				return '2';
			}
		} else if (sub[1] == 'G') {

			// GG*
			return 'G';

		} else {
			return '1';
		}

	} else {
		return '0';
	}
}

