#include <iostream> 
#include <string>

using namespace std;
int main()
{

    string first_name;
    getline(cin, first_name);

    //ask for last name
    string last_name;
    cout << "What is your last name?" << endl;
    cin >> last_name;

    cout << "Hello, " << first_name + last_name << endl;

    return 0;
}
