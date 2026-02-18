#include <iostream>
using namespace std;

int main(){

    int heads;
    int slices;
    int hunger;
    int slicereq;
    int pizzas;
    int leftovers;

    cout << "welcome to natanya's pizza party calculator :3" << endl;
    cout << "how many people are coming to your party?  ";
    cin >> heads;
    cout << "how many slices does each pizza have?  ";
    cin >> slices;
    cout << "how many slices will each person eat?  ";
    cin >> hunger;

    slicereq = hunger * heads;
    pizzas = slicereq / slices;

    if (slicereq % slices != 0){
        pizzas = pizzas + 1;
    }

    leftovers = pizzas * slices - slicereq;

    cout << "you will need to order " << pizzas << " pizzas" <<endl;
    cout << "you will have " << leftovers << " slices leftover" << endl;
    cout << "party on, dude!!!!" << endl;

    return 0;
}
