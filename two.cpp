#include <iostream>
using namespace std;

int main() {
    string name;
    int age;

    cout << "Enter your name: ";
    getline(cin, name); // takes full name (with spaces)

    cout << "Enter your age: ";
    cin >> age;

    cout << "\nHello, " << name << "! You are " << age << " years old." << endl;

    return 0;
}
