#include <iostream>

using namespace std;

void helloCPP(int, int);

int main(){

    int times,times2;
    cout<<"������ �Է��Ͻʽÿ�. : "<<endl;
    cin>>times;
    cout<<"������ �Է��Ͻʽÿ�. : "<<endl;
    cin>>times2;
    helloCPP(times, times2);
}

void helloCPP(int n, int m){
    for (int i = 0; i < n; i++)
    {
        cout<<"Hello,"<<endl;
    }
    for (int i = 0; i < m; i++)
    {
        cout<<"C++!"<<endl;
    }
}