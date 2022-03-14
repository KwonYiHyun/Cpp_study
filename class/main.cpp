#include <iostream>
#include "Stock.h"


int main(){

    // Stock temp=Stock("Panda", 100, 1000);
    // Stock temp2("Panda", 100, 1000);
    // Stock temp3;

    // temp.show();
    // temp.buy(10, 1200);
    // temp.show();
    // temp.sell(5, 800);
    // temp.show();

    // temp3=temp2;

    // cout<<"=================="<<endl;
    // Stock s1("A", 10, 1000);
    // Stock s2("B", 20, 1200);

    // s1.show();
    // s2.show();

    // cout<<"A와 B중 share_val이 큰 객체는 "<<endl;
    // s1.topval(s2).show();

    Stock s[4]={
        Stock("A", 10, 1000),
        Stock("B", 20, 2000),
        Stock("C", 30, 3000),
        Stock("D", 40, 4000)
    };

    Stock *first=&s[0];

    for (int i = 1; i < sizeof(s)/sizeof(Stock); i++)
    {
        first=&first->topval(s[i]);
    }

    first->show();
    
}