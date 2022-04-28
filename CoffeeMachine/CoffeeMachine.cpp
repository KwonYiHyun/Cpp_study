#include "CoffeeMachine.h"

int main(){
    CoffeeMachine CM(5, 10, 3);
    CM.drinkEspresso();
    CM.show();
    CM.drinkAmericano();
    CM.show();
    CM.drinkSugarCoffee();
    CM.show();
    CM.fill();
    CM.show();
}