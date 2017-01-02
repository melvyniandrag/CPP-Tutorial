#include <string>

class Hero {
private:
    int my_health;    
    std::string my_name;
public:
    Hero(std::string, int); // Constructor
    int getHealth();
    std::string getName();
};
