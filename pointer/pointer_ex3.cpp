#include <iostream>

using namespace std;

struct MyStruct{
    char name[20]  ;
    int age;
};

int main(){

    // 포인터 구조체(동적 구조체)의 멤버 변수에 접근할 경우에는 ->를 사용한다.
    MyStruct* temp=new MyStruct;

    cout<<"이름을 입력하세요"<<endl;
    cin>>temp->name;

    cout<<"나이를 입력하세요"<<endl;
    cin>>(*temp).age;

    cout<<"이름 : "<<temp->name<<" / 나이 : "<<temp->age<<endl;

}