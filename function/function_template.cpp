#include <iostream>

using namespace std;

// class 혹은 typeName
template <class Any>
Any sum(Any, Any);
template <class Any>
Any sum(int, Any);

int main(){

    // 함수 템플릿 C#의 제네릭 문법과 유사한 것 같다.
    // 구체적인 데이터형을 포괄할 수 있는 일반형으로 함수를 정의
    int a=3;
    int b=4;
    // 함수 오버로딩으로 구현한 sum함수 두개와 모두 대응하기 때문에 컴파일시 오류가 나온다.
    // cout<<sum(a,b)<<endl;

    float c=3.14;
    float d=1.592;
    cout<<sum(c,d)<<endl;
    
    cout<<sum(a,c)<<endl;
    
}

template <class Any>
Any sum(Any a, Any b){
    return a+b;
}

template <class Any>
Any sum(int a, Any b){
    return a+b;
}