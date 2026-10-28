#include<iostream>
using namespace std;

int main()
{
    int S, vf, vi, a;
    cout << "Enter Initial Velocity" << endl;
    cin >> vi;
    cout << "Enter Final Velocity" << endl;
    cin >> vf;
    cout << "Enter Acceleration" << endl;
    cin >> a;
    S = (vf*vf - vi*vi) / (2*a);
    cout << "Distance = S = " << S;
    return 0;
}
