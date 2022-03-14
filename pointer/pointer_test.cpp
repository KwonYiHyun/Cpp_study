#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    // 변수 크기만큼 배열 선언
    int* save=new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>save[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"번째 숫자 : "<<save[i]<<endl;
    }
    
}