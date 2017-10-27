#include <map>
#include <iostream>
#include <utility>


int main(){
    std::map<int, double> aMap;
    aMap[1] = 1.00;
    aMap[1] = 2.0; 
    std::map<int, double>::iterator anIt = aMap.begin();
    std::cout << (*anIt).first << "->" << (*anIt).second << std::endl;
    std::cout << (*aMap.begin()).first << std::endl;
}
