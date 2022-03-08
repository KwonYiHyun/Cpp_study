#include <iostream>
#include "Stock.h"


int main(){

    Stock temp=Stock("Panda", 100, 1000);
    Stock temp2("Panda", 100, 1000);
    Stock temp3;

    // temp.acquire("Pand", 100, 1000);
    temp.show();
    temp.buy(10, 1200);
    temp.show();
    temp.sell(5, 800);
    temp.show();

    temp3=temp2;

}