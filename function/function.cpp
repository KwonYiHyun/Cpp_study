#include <iostream>

using namespace std;

const float PIE=3.14;
// ����� �Լ��� ������ ����
void cheers(int n);
float circle(int x);

int main(){

    int a;
    cout<<"���� �Է��ϼ��� : "<<endl;
    cin>>a;
    cheers(a);

    int b;
    cout<<"������ ���� �Է� : "<<endl;
    cin>>b;
    float c=circle(b);
    cout<<"���� ���� "<<c<<" �Դϴ�."<<endl;
    
}

// main�Լ� �� �Լ��� ������ ����
void cheers(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Cheers!"<<endl;
    }
}

float circle(int x){
    return x*x*PIE;
}