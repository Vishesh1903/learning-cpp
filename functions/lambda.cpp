#include <iostream>

using namespace std;

int main() {

   auto printline = [](const string str){
        cout << str << endl;
    };

    printline("Hello, World!");
    printline("Welcome to C++14 Lambdas!");
    return 0;
}   