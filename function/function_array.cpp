#include <iostream>

using namespace std;

const int SIZE=8;

int sumArr(int*, int*);

int main(){

    int arr[SIZE]={1,2,4,8,16,32,64,128};

    // 프로그램에서 배열의 이름은 배열의 첫번째 원소의 주소값으로 인식한다.
    int sum=sumArr(arr, arr+SIZE);

    cout<<"SUM = "<<sum<<endl;
}

int sumArr(int* begin, int* end){
    int total=0;
    int* pt;
    for (pt=begin; pt!=end; pt++)
    {
        total+=*pt;
    }
    return total;
}