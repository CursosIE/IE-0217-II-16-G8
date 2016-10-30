inc = -I ./include
tmpl = -I ./templates
tmpl_files = $(wildcard templates/*.h)
src := $(wildcard source/*.cpp)
obj := $(notdir $(src:.cpp=.o))

CC = g++ -Wall -std=c++11

all: plantillas $(obj)

plantillas: $(tmpl_files)
	$(CC) $(tmpl) -fsyntax-only $(tmpl_files)

%.o: source/%.cpp
	$(CC) $(inc) $(tmpl) -c -o $@ $<

clean:
	rm -f *.o *.out ./*/*.ghc

#g++ ./source/ListaConArreglo.cpp -I ./include
