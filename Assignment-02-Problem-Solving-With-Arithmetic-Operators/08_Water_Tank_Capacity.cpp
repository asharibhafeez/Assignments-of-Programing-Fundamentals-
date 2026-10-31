#include<iostream>
using namespace std;

int main()
{
    float length, width, height, volume_in_cubic_meters, capacity_in_liters;
    cout << "Enter Tank Length" << endl;
    cin >> length;
    cout << "Enter Tank Width" << endl;
    cin >> width;
    cout << "Enter Tank Height" << endl;
    cin >> height;
    volume_in_cubic_meters=length*width*height;
    capacity_in_liters=volume_in_cubic_meters*1000;
    cout << "Total Tank Volume = " << volume_in_cubic_meters << endl;
    cout << "Total Capacity in Liters = "<< capacity_in_liters << endl;
    return 0 ;
}