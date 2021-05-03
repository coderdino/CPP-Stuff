#include <iostream>

using namespace std;

double num; // storing variable outside function makes it global

double cube()
{

    // if 'string hi' was placed here, it would be a local variable
    cout << "Enter a number: ";
    cin >> num;
    double result = num * num * num;
    return result;
}

int main()
{
    double answer = cube();
    cout << num << " cubed is " << answer;
    return 0;
}
