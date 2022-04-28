#include <iostream>

using namespace std;

class CoffeeMachine{
public:
    void show();
    void drinkEspresso();
    void drinkAmericano();
    void drinkSugarCoffee();
    void fill();
    CoffeeMachine(int, int, int);

public:
    int _coffee;
    int _water;
    int _sugar;
};

CoffeeMachine::CoffeeMachine(int coffee, int water, int sugar){
    _coffee = coffee;
    _water = water;
    _sugar = sugar;
}

void CoffeeMachine::show(){
    cout << "커피 머신 상태, 커피:" << _coffee << "\t물:" << _water << "\t설탕:" << _sugar << endl;
}

void CoffeeMachine::drinkEspresso(){
    _coffee--;
    _water--;
}

void CoffeeMachine::drinkAmericano(){
    _coffee--;
    _water -= 2;
}

void CoffeeMachine::drinkSugarCoffee(){
    _coffee--;
    _water -= 2;
    _sugar--;
}

void CoffeeMachine::fill(){
    _coffee = 10;
    _water = 10;
    _sugar = 10;
}