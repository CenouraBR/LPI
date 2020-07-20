GCC = g++
GCC_FLAGS = -std=c++11
PROGRAM = banco

all: $(PROGRAM)

$(PROGRAM): main.o Conta.o Cliente.o ClientePJ.o Agencia.o Segurança.o Funcionario.o Caixa.o Gerente.o ClientePF.o
	$(GCC) $(FLAGS) -o $(PROGRAM) main.o Conta.o Cliente.o ClientePJ.o Agencia.o Segurança.o Funcionario.o Caixa.o Gerente.o ClientePF.o

main.o: src/main.cpp
	$(GCC) $(FLAGS) -c src/main.cpp

Agencia.o: src/Agencia.cpp include/Agencia.hpp
	$(GCC) $(FLAGS) -c src/Agencia.cpp

Cliente.o: src/Cliente.cpp include/Cliente.hpp
	$(GCC) $(FLAGS) -c src/Cliente.cpp

ClientePJ.o: src/ClientePJ.cpp include/ClientePJ.hpp
	$(GCC) $(FLAGS) -c src/ClientePJ.cpp

ClientePF.o: src/ClientePF.cpp include/ClientePF.hpp
	$(GCC) $(FLAGS) -c src/ClientePF.cpp

Conta.o: src/Conta.cpp include/Conta.hpp
	$(GCC) $(FLAGS) -c src/Conta.cpp

Segurança.o: src/Segurança.cpp include/Segurança.hpp
	$(GCC) $(FLAGS) -c src/Segurança.cpp

Gerente.o: src/Gerente.cpp include/Gerente.hpp
	$(GCC) $(FLAGS) -c src/Gerente.cpp

Funcionario.o: src/Funcionario.cpp include/Funcionario.hpp
	$(GCC) $(FLAGS) -c src/Funcionario.cpp

Caixa.o: src/Caixa.cpp include/Caixa.hpp
	$(GCC) $(FLAGS) -c src/Caixa.cpp	

clean:
	rm -f *.o
	rm $(PROGRAM)

run:
	./banco

.PHONY: all clean run