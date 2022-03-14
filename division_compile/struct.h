#ifndef STRUCT
#define STRUCT
#include <iostream>

using namespace std;

struct MyStruct{
    string name;
    int age;
};

void display(MyStruct&);

void display(MyStruct& temp){
    cout<<"�̸� : "<<temp.name<<endl;
    cout<<"���� : "<<temp.age<<endl;
}

#endif