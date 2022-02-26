#include <iostream>

using namespace std;

int main(){

    double* p3=new double[3]; // double형 데이터 3개를 저장할 수 있는 공간을 대입한다.
    p3[0]=0.2;
    p3[1]=0.5;
    p3[2]=0.8;

    cout<<"p3[1] is "<<p3[1]<<endl;
    p3=p3+1; // 포인터를 증가시킨다.
    /*
    double형으로 선언하고 +1을 시켰으므로
    double형의 크기만큼의 주소값을 증가시켜 p3의 값들이 한칸씩 떙겨지는것
    */

    cout<<"Now p3[0] is "<<p3[0]<<" and ";
    cout<<"p3[1] is "<<p3[1]<<endl;

    p3=p3-1; // 다시 시작 위치를 지시한다.
    delete[] p3; // 배열 메모리를 해제한다.

}