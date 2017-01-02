COMP = g++

all: MyFirstGame

MyFirstGame: main.o hero.o
	$(COMP) main.o hero.o -o MyFirstGame

main.o: main.cpp 
	$(COMP) -c main.cpp

hero.o: hero.cpp
	$(COMP) -c hero.cpp

clean:
	rm *.o
