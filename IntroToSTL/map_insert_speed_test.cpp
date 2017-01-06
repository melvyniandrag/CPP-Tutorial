#include <ctime>
#include <iostream>
#include <utility>
#include <map>
using namespace std;

void testInsertOne(int n_trials){
    for(int trial=0; trial!=n_trials; ++trial){
        map<char,int> mymap;
        mymap.insert ( pair<char,int>('a',100) );
        mymap.insert ( pair<char,int>('z',200) );
        map<char,int>::iterator it = mymap.begin();
        mymap.insert (it, pair<char,int>('b',300));  // max efficiency inserting
    }
 
}

void testInsertTwo(int n_trials){
    for(int trial=0; trial!=n_trials; ++trial){
        map<char,int> mymap;
        mymap.insert ( pair<char,int>('a',100) );
        mymap.insert ( pair<char,int>('z',200) );
        map<char,int>::iterator it = mymap.begin();
        mymap.insert (it, pair<char,int>('c',400));  // no max efficiency inserting
    }
 
}



int main (){
    int start_s, stop_s;
    int n_trials = 1000000;

    start_s=clock();
    testInsertOne(n_trials);
    stop_s = clock();
    cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
   
    start_s = clock();
    testInsertTwo(n_trials);
    stop_s = clock();
    cout << "time: " << (stop_s-start_s)/double(CLOCKS_PER_SEC)*1000 << endl;
 
}
