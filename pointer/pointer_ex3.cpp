#include <iostream>

using namespace std;

struct MyStruct{
    char name[20]  ;
    int age;
};

int main(){

    // ������ ����ü(���� ����ü)�� ��� ������ ������ ��쿡�� ->�� ����Ѵ�.
    MyStruct* temp=new MyStruct;

    cout<<"�̸��� �Է��ϼ���"<<endl;
    cin>>temp->name;

    cout<<"���̸� �Է��ϼ���"<<endl;
    cin>>(*temp).age;

    cout<<"�̸� : "<<temp->name<<" / ���� : "<<temp->age<<endl;

}