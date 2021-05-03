#include <iostream>

using namespace std;


void sayHi() //  You can use a function stubb(need to put the function name at the top but then can put code anywhere else)
{
    int age;
    string name;
    cout << "Name: ";
    getline(cin, name);
    cout << "Age: ";
    cin >> age;
    cout << "Hello " << name << ". You are " << age;
}

int main()
{
    sayHi();
    return 0;
}
