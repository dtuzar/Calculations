#include <iostream>
#include <string>
using namespace std;


int main()
{
    string name;
    string color;

    cout << "What is your name?: " << endl;
    cin >> name;
    cout << "What is your favorite color?: " << endl;
    cin >> color;
    cout << "Your name is " << name << " and your favorite color is " << color << "!" << endl;
    
    int int1;
    int int2;

    cout << "give me 1 int" << endl;
    cin >> int1;
    cout << "give me another int" << endl;
    cin >> int2;
    cout << "Check this out" << endl;
    cout << int1 << "+" << int2 << "=" << int1 + int2 << endl;
    cout << int1 << "-" << int2 << "=" << int1 - int2 << endl;
    cout << int1 << "*" << int2 << "=" << int1 * int2 << endl;
    cout << int1 << "/" << int2 << "=" << int1 / int2 << endl;

    float x;
    float y;

    cout << "now give me 1 float" << endl;
    cin >> x;
    cout << "now give me another float" << endl;
    cin >> y;
    cout << "Now check this one out" << endl;
    cout << x << "+" << y << "=" << x + y << endl;
    cout << x << "-" << y << "=" << x - y << endl;
    cout << x << "*" << y << "=" << x * y << endl;
    cout << x << "/" << y << "=" << x / y << endl;

}