#include <iostream>

using namespace std;

int main()
{

    float base_price = 399.99;
    int percentage_to_increase;

    cout << "Enter % to increase base_price by: " << endl;
    cin >> percentage_to_increase;

    int final_price = (base_price * ((float)percentage_to_increase / 100)) + base_price;

    cout << "Final Price is : \n"
         << final_price << endl;

    cout << (float)10 / 100 << endl;

    return 0;
}