inc = -I ./include
inc_files = $(wildcard include/*.h)
tmpl = -I ./templates
tmpl_files = $(wildcard templates/*.h)
src := $(wildcard source/*.cpp)
obj := $(notdir $(src:.cpp=.o))

CC = g++ -Wall -std=c++11

all: a.out

docs: doxy.config $(tmpl_files) $(inc_files)
	rm -rf ./html ./latex
	doxygen $<
	
a.out: main.cpp plantillas $(obj)
	$(CC) $(tmpl) $(inc) *.o main.cpp

plantillas: $(tmpl_files)
	$(CC) $(tmpl) -fsyntax-only $(tmpl_files)

%.o: source/%.cpp
	$(CC) $(inc) $(tmpl) -c -o $@ $<

clean:
	rm -f *.o *.out ./*/*.ghc

#g++ ./source/ListaConArreglo.cpp -I ./include
