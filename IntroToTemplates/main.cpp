/*
Class template is here:
http://www.cplusplus.com/reference/queue/priority_queue/
Constructors
http://www.cplusplus.com/reference/queue/priority_queue/priority_queue/
*/

#include <queue>
#include <vector>
#include <iostream>
#include "comparator.h"
#include "base_class.h"
#include "my_class.h"

using namespace std;

int main(){
    vector<int> v{2, 3, 1, 2};
    MyClass<LT> lt(v);
    MyClass<GT> gt(v);
    cout << lt.getTop() << endl;
    cout << gt.getTop() << endl; 
    
    /*
    Thanks to Baris on SO http://stackoverflow.com/questions/15764960/containers-and-derived-classes
    */
    vector<BaseClass*> vec;
    MyClass<LT>* lt2 = new MyClass<LT>(v);
    MyClass<GT>* gt2 = new MyClass<GT>(v);
    vec.push_back(lt2);
    vec.push_back(gt2);
    for (auto c : vec){
        cout << c->getTop() << endl;
    }
}
