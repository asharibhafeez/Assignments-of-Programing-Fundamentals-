#include<iostream>
using namespace std;

int main()
{
    float circumference, r, pi = 3.1416;
    cout << "Radius of Circle" << endl;
    cin >> r;
    circumference = pi*r*r;
    cout << "Circumference of Circle =" << circumference;
    return 0;
}