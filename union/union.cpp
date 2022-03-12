#include <iostream>

using namespace std;

int main(){
    
    // 공용체(union)
    // 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있음.

    union MyUnion
    {
        int intVal;
        long longVal;
        float floatVal;
    };
    
    MyUnion test;
    test.intVal=3;
    cout<<test.intVal<<endl;
    
    test.longVal=33;
    cout<<test.intVal<<endl;
    cout<<test.longVal<<endl;

    test.floatVal=3.3;
    cout<<test.intVal<<endl;
    cout<<test.longVal<<endl;
    cout<<test.floatVal<<endl;

}