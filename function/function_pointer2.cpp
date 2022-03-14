#include <iostream>

using namespace std;

int sum(int, int);

int main(){
    
    // 함수를 지시하는 포인터
    // 어떠한 함수에 함수의 주소를 매개변수로 넘겨주는 경우 유용하게 사용할 수 있다.
    /*
    1. 함수의 주소를 얻는다.
    2. 함수를 지시하는 포인터를 선언한다.
    3. 함수를 지시하는 포인터를 사용하여 그 함수를 호출한다.
    */

    // 이름만 호출하면 함수의 주소를 얻을 수 있다.
    cout<< sum <<endl;

    // 함수를 지정하는 포인터 선언
    // 함수형식 / 포인터 / 매개변수형식
    int (*pf)(int, int);
    // 이렇게 선언한 포인터에 함수의 주소를 지정한다.
    pf=sum;

    cout<<(*pf)(3, 4)<<endl;

}

int sum(int n, int m){
    return n+m;
}