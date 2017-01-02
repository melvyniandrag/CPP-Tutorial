COMP=g++

all: InheritanceExample

InheritanceExample: main.o base1.o base2.o inherited.o
	$(COMP) main.o base1.o base2.o inherited.o -o InheritanceExample

main: main.cpp
	$(COMP) -c main.cpp

inherited: inherited.cpp 
	$(COMP) -c inherited.cpp

base2: base2.cpp
	$(COMP) -c base2.cpp
 
base1: base1.cpp
	$(COMP) -c base1.cpp

clean:
	rm *.o
