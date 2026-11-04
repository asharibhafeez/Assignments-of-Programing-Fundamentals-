#include<iostream>
using namespace std;
int main()
{
    int bank_balance;
    cout << "Enter Your Current Bank Balance: ";
    cin >> bank_balance;
    if (bank_balance<5000)
        cout << "Minimum Balance Alert!" << endl;
    return 0;
}