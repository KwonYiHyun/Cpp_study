#include <iostream>
#include "time.h"

using namespace std;

int main(){

    Time day1(1, 40);
    Time day2(2, 30);

    day1.show();
    day2.show();

    Time total;
    total=day1.operator+(day2);
    total=day1+day2;
    total.show();

    Time total2;
    total2=day1*3;
    total2.show();

}