#include <iostream>
#include <string>
using namespace std;

int main()
{
    string previous; // previous word; initialized to ""
    string current; // current word
    while (cin>>current) { // read a stream of words
        if (previous == current){
            cout << "repeated word: " << current << '\n';
        } // check if the word is the same as last
        previous = current;
    }
    return 0;
}