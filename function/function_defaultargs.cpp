#include <iostream>

using namespace std;

const int SIZE=8;
// 디폴트 매개변수
/*
함수를 호출할때 값을 입력하지 않으면 자동으로 지정된다.
함수의 원형을 정의하는 부분에서 지정한다.
오른쪽에서 부터 지정해야한다.
*/
int sumArr(int*, int n=1);

int main(){
    int arr[SIZE]={1,2,4,8,16,32,64};
    int sum=sumArr(arr);

    cout<<"총합 "<<sum<<endl;
}

int sumArr(int* arr, int n){
    int total=0;

    for (int i = 0; i < n; i++)
    {
        total+=arr[i];
    }
    
    return total;
}