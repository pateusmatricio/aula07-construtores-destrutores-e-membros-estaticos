aula07 = ./bin/corridaDeSapos

compilador = g++

flags = -Wall -ansi -pedantic -O0 -g -std=c++11

objetos = ./build/main.o ./build/sapo.o ./build/corrida.o

aula07: $(aula07)

$(aula07): flags += -I. -I./include/

$(aula07): $(objetos)
	$(compilador) $^ $(flags) -o $@

./build/main.o: ./src/main.cpp
	$(compilador) -c $^ $(flags) -o $@

./build/sapo.o: ./src/sapo.cpp
	$(compilador) -c $^ $(flags) -o $@

./build/corrida.o: ./src/corrida.cpp
	$(compilador) -c $^ $(flags) -o $@

dir:
	mkdir -p bin
	mkdir -p build
	mkdir -p include
	mkdir -p src
	mkdir -p doc
	mkdir -p lib
	mkdir -p test
