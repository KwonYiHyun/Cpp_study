#include <iostream>

using namespace std;

int main(){

    short month[12];
    
    short m[12]={1,2,3};

    char a[6]={'H','e','l','l','o','\0'};
    cout<<a<<endl;

    char b[]="Hello";
    cout<<b[1]<<endl;

    // 배열에 변수를 넣으려면 상수로 선언해야한다.
    const int size=15;
    char name[size];
    
}