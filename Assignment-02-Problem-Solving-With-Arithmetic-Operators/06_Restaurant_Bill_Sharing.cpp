#include <iostream>
using namespace std;

int main() {
    float totalBill, perPerson;
    int numberOfFriends;

    cout << "Enter total restaurant bill: ";
    cin >> totalBill;

    cout << "Enter number of friends: ";
    cin >> numberOfFriends;

    perPerson = totalBill / numberOfFriends;

    cout << "Each friend should pay: Rs. " << perPerson << endl;

    return 0;
}