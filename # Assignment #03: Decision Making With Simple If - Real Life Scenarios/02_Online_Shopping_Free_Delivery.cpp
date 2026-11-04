#include<iostream>
using namespace std;
int main()
{
    int total_amount;
    cout << "Enter Your Total Shopping Amount: ";
    cin >> total_amount;
    if (total_amount>=3000)
        cout << "Congratulations! You Qualify For Free Delivery." << endl;
    return 0;
}    