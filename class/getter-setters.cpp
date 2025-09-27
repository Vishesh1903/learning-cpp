#include <iostream>

using namespace std;

class Car
{
private:
    string brand;
    int mileage;

public:
    Car(string b, int m) : brand(b), mileage(m) {}

    string getBrand() const { return brand; }
    int getMileage() const { return mileage; }
    void setBrand(const string &b) { brand = b; }
};
void printCar(string b, int m)
{
    cout << "Brand: " << b << ", Mileage: " << m << endl;
}

int main()
{
    Car car1("Toyota", 15000);
    string brand = car1.getBrand();
    int mileage = car1.getMileage();
    printCar(brand, mileage);


    return 0;
}