#include <iostream>

using namespace std;

const float PIE=3.14;
// 사용할 함수의 원형을 선언
void cheers(int n);
float circle(int x);

int main(){

    int a;
    cout<<"수를 입력하세요 : "<<endl;
    cin>>a;
    cheers(a);

    int b;
    cout<<"반지름 길이 입력 : "<<endl;
    cin>>b;
    float c=circle(b);
    cout<<"원의 넓이 "<<c<<" 입니다."<<endl;
    
}

// main함수 후 함수의 내용을 정의
void cheers(int n){
    for (int i = 0; i < n; i++)
    {
        cout<<"Cheers!"<<endl;
    }
}

float circle(int x){
    return x*x*PIE;
}