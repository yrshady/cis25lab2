#include <iostream>
using namespace std;

int main(){

    int MagicNumber;

    cout << "what is your favorite number?" << endl;
    cin >> MagicNumber;
    cout << "magic commencing..." << endl;

    int result = ((MagicNumber * 2 + 10) / 2 - MagicNumber);

    cout << "the result is " << result << endl;
    cout << "thank you!" << endl;

    return 0;
}