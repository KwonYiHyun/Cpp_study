#include <iostream>

using namespace std;

int main(){

    int a=3.141592;
    cout<<a<<endl;

    char ch='M';
    // 강제적인 형변환
    // type(a) (type)a
    cout<<(int) ch<<" "<<int(ch)<<endl;

    // C++
    // static_cast<type>

    cout<<static_cast<int>(ch)<<endl;
    
}