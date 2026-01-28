#include <iostream>
#include <iomanip>
using namespace std;

int main(){

    double taxRate = 0.075;
    double price;

    cout << "please enter the listed price of your purchase: ";
    cin >> price;

    double totalPrice = price + (price * taxRate);

    cout << "the original price is $" << fixed << setprecision(2) << price << endl;
    cout << "sales tax will be $" << fixed << setprecision(2) << price * taxRate <<endl;
    cout << "the price after tax is $" << fixed << setprecision(2) << totalPrice << endl;
    cout << "thank you!!!" << endl;

return 0;
}