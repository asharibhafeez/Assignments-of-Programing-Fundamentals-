#include<iostream>
using namespace std;
int main()
{
    int current_speed, speed_limit;
    cout << "Enter Your Current Vehicle Speed: ";
    cin >> current_speed;
    cout << "Enter Speed Limit: ";
    cin >> speed_limit;
    if (current_speed>speed_limit)
        cout << "Speed Limit Violated!" << endl;
    return 0;
}