#include <iostream>
using namespace std;

int main() {
    int ageInYears;
    int ageInMonths, ageInWeeks, ageInDays;

    cout << "Enter your age in years: ";
    cin >> ageInYears;

    ageInMonths = ageInYears * 12;
    ageInWeeks = ageInYears * 52;
    ageInDays = ageInYears * 365;

    cout << "Your age in months: " << ageInMonths << " months" << endl;
    cout << "Your age in weeks: " << ageInWeeks << " weeks" << endl;
    cout << "Your age in days: " << ageInDays << " days" << endl;

    return 0;
}