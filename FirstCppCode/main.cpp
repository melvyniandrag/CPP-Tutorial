/*
Our first c++ code
this will just print some values to the terminal.
*/
#include<iostream>
#include<string>

using namespace std;
 // wtf is a namespace?!?!?!?!?!
 // well get to that.
int main(int argc, char** argv){
    // variables
    int var1 = 1;
    double var2 = 2.0;
    float var3 = 1.0;
    char var4 = 'a';
    string var5 = "Hello world"; // If you want, look up c style strings.

    // write output
    cout << "My first variable: " << var1 << endl;
    cout << "My second variable: " << var2 << endl;
    cout << "My third variable: " << var3 << endl;
    cout << "My fourth variable " << var4 << endl;
    cout << "My fifth variable " << var5 << endl;
}
