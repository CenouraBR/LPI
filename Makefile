<<<<<<< HEAD
GCC = g++
GCC_FLAGS = -std=c++11
PROGRAM = diary

all: $(PROGRAM)

$(PROGRAM): App.o Date.o Time.o Timer.o Diary.o main.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) App.o Date.o Time.o Timer.o Diary.o main.o

main.o: src/main.cpp 
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Diary.o: src/Diary.cpp include/Diary.h
	$(GCC) $(GCC_FLAGS) -c src/Diary.cpp

Time.o: src/Time.cpp include/Time.h
	$(GCC) $(GCC_FLAGS) -c src/Time.cpp

Date.o: src/Date.cpp include/Date.h
	$(GCC) $(GCC_FLAGS) -c src/Date.cpp

App.o: src/App.cpp include/App.h
	$(GCC) $(GCC_FLAGS) -c src/App.cpp	

Timer.o: src/Timer.cpp include/Timer.h
	$(GCC) $(GCC_FLAGS) -c src/Timer.cpp

clean:
	rm -f *.o

=======
GCC = g++
GCC_FLAGS = -std=c++11
PROGRAM = diary

all: $(PROGRAM)

$(PROGRAM): App.o Date.o Time.o Timer.o Diary.o main.o
	$(GCC) $(GCC_FLAGS) -o $(PROGRAM) App.o Date.o Time.o Timer.o Diary.o main.o

main.o: src/main.cpp 
	$(GCC) $(GCC_FLAGS) -c src/main.cpp

Diary.o: src/Diary.cpp include/Diary.h
	$(GCC) $(GCC_FLAGS) -c src/Diary.cpp

Time.o: src/Time.cpp include/Time.h
	$(GCC) $(GCC_FLAGS) -c src/Time.cpp

Date.o: src/Date.cpp include/Date.h
	$(GCC) $(GCC_FLAGS) -c src/Date.cpp

App.o: src/App.cpp include/App.h
	$(GCC) $(GCC_FLAGS) -c src/App.cpp	

Timer.o: src/Timer.cpp include/Timer.h
	$(GCC) $(GCC_FLAGS) -c src/Timer.cpp

clean:
	rm -f *.o

>>>>>>> 0d620eff835df5b3bf1d0c379e416731c0aa6d6c
.PHONY: all clean