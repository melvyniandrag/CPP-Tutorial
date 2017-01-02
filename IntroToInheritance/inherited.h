#include "base1.h"
#include "base2.h"

class Inherited: public Base1, public Base2{
private:
    int member1;
    int member2;
public:
    Inherited(int, int);
};
