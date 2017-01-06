#include<iostream>
#include<vector>
#include<list>

int main(){
    // As an exercise to show one use case of iterators, change the type to vector from list, and the code still runs.
    std::list<int> myContainer{1, 2, 3}; // This only works with uniform initialization in c++11
    std::list<int>::iterator myIterator;
    for (myIterator = myContainer.begin(); myIterator != myContainer.end(); ++myIterator){
        std::cout << *myIterator << " ";
    }
    std::cout << "\n" << std::endl;
}
