#include<iostream>
using namespace std;

int main()
{
    int S, vi, t, a;
    cout << "Enter Initial Velocity" << endl;
    cin >> vi;
    cout << "Enter Acceleration" << endl;
    cin >> a;
    cout << "Enter Time" << endl;
    cin >> t;
    S = vi*t+1/2*a*t*t;
    cout << " S =" << S;
    return 0;
}