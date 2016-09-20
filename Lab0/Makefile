compilar: c.out cpp.out python.out

c.out: suma.c
	gcc suma.c -o c.out

cpp.out: suma.cpp
	g++ -std=c++11 suma.cpp -o cpp.out

python.out: suma.py
	echo "xD"

borrar:
	rm -f c.out cpp.out

ejecutar: compilar
	@echo "Ejecutando el programa en C..."
	./c.out 65 -3 0.5
	@echo "\nEjecutando el programa en C++..."
	./cpp.out 2 100.1 -69
	@echo "\nEjecutando el programa en Python..."
	python suma.py 666 42.42 8 0.01 0.001
