#include <iostream>

using namespace std;

void countDown(int);

int main(){
    countDown(5);
}

void countDown(int n){
    cout<<"Counting..."<<n<<endl;
    if(n>0)
        countDown(n-1);
    cout<<n<<"번째 카운트다운"<<endl;
}