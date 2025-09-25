#include <iostream>
using namespace std;

int main (){

    int cups;
    double price_per_cup, total_price, discounted_price;

    cout << "Enter the number of cups: ";
    cin >> cups;

    cout << "Enter the price per cup: ";
    cin >> price_per_cup;

    total_price = cups * price_per_cup;

    if(total_price >= 100){
        double discount = total_price * 0.05;
        discounted_price = total_price - discount;
        cout << "Your totals comes out to be: " << discounted_price << endl;
    }else{
        cout << "Your totals comes out to be: " << total_price << endl;
    }

    return 0;
}