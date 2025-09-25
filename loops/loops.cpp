#include <iostream>

using namespace std;

int main(){

    int tea_cups;
    cout << "Enter the number of tea to order:-" << endl;
    cin >> tea_cups;

    while(tea_cups > 0){
        cout << "Serving a cup of Tea" << endl << "Remaining Quantity: " << --tea_cups << endl;
    }
    cout << "All Tea cups are served" << endl;

    return 0;
}