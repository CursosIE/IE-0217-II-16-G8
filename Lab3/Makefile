inc = ./include
src := $(wildcard source/*.cpp)
obj := $(notdir $(src:.cpp=.o))

CC = g++ -Wall -std=c++11 -I $(inc)

all: $(obj)
	$(CC) $^ -o genericos

%.o: source/%.cpp
	$(CC) -c -o $@ $<

clean:
	rm -f *.o *.out genericos
