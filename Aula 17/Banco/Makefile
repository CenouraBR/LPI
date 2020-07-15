GCC = g++
GCC_FLAGS = -std=c++11
PROGRAM = banco

all: $(PROGRAM)

$(PROGRAM): main.o Conta.o Cliente.o ClientePJ.o Agencia.o
	$(GCC) $(FLAGS) -o $(PROGRAM) main.o Conta.o Cliente.o ClientePJ.o Agencia.o

main.o: src/main.cpp
	$(GCC) $(FLAGS) -c src/main.cpp

Agencia.o: src/Agencia.cpp include/Agencia.hpp
	$(GCC) $(FLAGS) -c src/Agencia.cpp

Cliente.o: src/Cliente.cpp include/Cliente.hpp
	$(GCC) $(FLAGS) -c src/Cliente.cpp

ClientePJ.o: src/ClientePJ.cpp include/ClientePJ.hpp
	$(GCC) $(FLAGS) -c src/ClientePJ.cpp

Conta.o: src/Conta.cpp include/Conta.hpp
	$(GCC) $(FLAGS) -c src/Conta.cpp

clean:
	rm -f *.o
	rm $(PROGRAM)

run:
	./banco

.PHONY: all clean run