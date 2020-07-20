GCC = g++
GCC_FLAGS = -std=c++11
PROGRAM = supermercado

all: $(PROGRAM)

$(PROGRAM): cliente.o estabelecimento.o produto.o main.o fornecedor.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) cliente.o estabelecimento.o produto.o main.o fornecedor.o

main.o: src/main.cpp 
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

cliente.o: src/cliente.cpp include/cliente.hpp
	$(GCC) $(GCC_FLAGS) -c src/cliente.cpp

estabelecimento.o: src/estabelecimento.cpp include/estabelecimento.hpp
	$(GCC) $(GCC_FLAGS) -c src/estabelecimento.cpp	

produto.o: src/produto.cpp include/produto.hpp
	$(GCC) $(GCC_FLAGS) -c src/produto.cpp

fornecedor.o: src/fornecedor.cpp include/fornecedor.hpp
	$(GCC) $(GCC_FLAGS) -c src/fornecedor.cpp
		
clean:
	rm -f *.o
	rm $(PROGRAM)

run:
	./supermercado	

.PHONY: all clean run