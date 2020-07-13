GCC = g++
GCC_FLAGS = -std=c++11
PROGRAM = empresa

all: $(PROGRAM)

$(PROGRAM): main.o Empresa.o Funcionario.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) main.o Funcionario.o Empresa.o

main.o: src/main.cpp
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.hpp
	$(GCC) $(GCC_FLAGS) -c src/Funcionario.cpp

Empresa.o: src/Empresa.cpp include/Empresa.hpp
	$(GCC) $(GCC_FLAGS) -c src/Empresa.cpp


clean:
	rm -f *.o
	rm $(PROGRAM)

run:
	./empresa

.PHONY: all clean run