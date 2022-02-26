#include <iostream>

using namespace std;

int main(){
    // 열거체(enum)
    // 기호 상수를 만드는 것에 대한 또다른 방법.

    enum spectrum{red, orange, yellow, green, blue, violet, indigo, ultraviolet};

    spectrum a=orange;
    cout<<a<<endl;

    int b;
    b=blue;
    cout<<b<<endl;

    b=blue+3;
    cout<<b<<endl;

}