#include <iostream>

using namespace std;

int main(){

    int a=3;
    int* pr=&a;

    cout<<*pr<<endl;

    *pr=5;

    cout<<*pr<<endl;
    
}