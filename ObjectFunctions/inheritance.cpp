#include <iostream>
using namespace std;

class Chef
{
private:
    void makeSpecial()
    {
        cout << "Secret" << endl;
    }

public:
    void makeChiken()
    {
        cout << "The chef makes chicken" << endl;
    }
    void makeSalad()
    {
        cout << "The chef makes salad" << endl;
    }
    void makeSpecialDish()
    {
        cout << "The chef makes bbq ribs" << endl;
    }
};

class italianChef : private Chef
{
public:
    void makePizza()
    {
        cout << "The chef makes pizza" << endl;
    }
};

int main()
{
    Chef chef;
    italianChef Ichef;
    chef.
    chef.makeChiken();
    Ichef.makePizza();
}
