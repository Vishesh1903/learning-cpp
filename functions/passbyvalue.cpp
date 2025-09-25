#include <iostream>

using namespace std;

int incBy2(int a){
    return a + 2;
}
void incBy3(int &c){
    c = c + 3;
}

int main(){
    int a = 5;
    incBy3(a);
    cout << a << endl; // a is unchanged
    return 0;
}