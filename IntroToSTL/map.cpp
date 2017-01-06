#include <map>
#include <iostream>
#include <utility>
using namespace std;

int main(){
    map<int, double> aMap;
    aMap[1] = 1.00;
    aMap[1] = 2.0; 
    map<int, double>::iterator anIt = aMap.begin();
    cout << (*anIt).first << "->" << (*anIt).second << endl;
    cout << (*aMap.begin()).first << endl;
}
