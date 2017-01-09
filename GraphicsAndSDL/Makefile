COMP = g++ -std=c++11
LINKER_FLAGS = -lSDL2
COMPILER_FLAGS = -Wall
all: MyFirstGame

MyFirstGame: main.o window.o
	$(COMP) $(COMPILER_FLAGS) main.o window.o -o MyFirstGame $(LINKER_FLAGS)

main.o: main.cpp 
	$(COMP) $(COMPILER_FLAGS) -c main.cpp

window.o: window.cpp
	$(COMP) $(COMPILER_FLAGS) -c window.cpp

clean:
	rm *.o
