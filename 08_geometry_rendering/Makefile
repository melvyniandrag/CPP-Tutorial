COMP = g++ -std=c++11
LINKER_FLAGS = -lSDL2 -lSDL2_image
COMPILER_FLAGS = -Wall
all: MyFirstGame

MyFirstGame: main.cpp
	$(COMP) $(COMPILER_FLAGS) main.cpp -o MyFirstGame $(LINKER_FLAGS)

clean:
	rm *.o
