#include <string>
#include <iostream>
#include "hero.h"

using namespace std;

int main(int argc, char** argv){
    Hero h("Popeye", 10);
    cout << h.getName() << "'s health is " << h.getHealth() << endl;
}
