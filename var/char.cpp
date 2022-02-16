#include <iostream>

using namespace std;

int main(){

    int a=77;
    char b=a;
    char c='a';
    char d[]={'a','b','c','\0'};
    // null 문자 '\0'
    // string의 경우 명시적으로 null문자가 포함되어 있다.
    cout<<b<<" "<<c<<endl;
    cout<<d<<endl;
}