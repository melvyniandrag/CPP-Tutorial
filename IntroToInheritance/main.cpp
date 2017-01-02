#include <iostream>
#include "base1.h"
#include "base2.h"
#include "inherited.h"

using namespace std;

int main(){
    Base1 b1(1);
    Base2 b2(2);
    Inherited i1(3,4);
    
    cout << "b1.getMember1(): " << b1.getMember1() << endl;
    cout << "b2.getMember2(): " << b2.getMember2() << endl;
    cout << "i1.getMember1(): " << i1.getMember1() << endl;
    cout << "i1.getMember2(): " << i1.getMember2() << endl; 
}   
