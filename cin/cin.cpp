#include <iostream>

using namespace std;

int main(){

    const int size=15;
    char name1[size];
    char name2[size];

    //cin>>name1;
    //cout<<name1<<endl;

    // 하지만 cin의 경우 스페이스바, 탭, 엔터를 문자열이 끝났다고 인식한다.
    // 공백을 포함한 입력을 받기 위해서는 get, getline을 사용한다.
    // 기본적으로 get과 getline은 동일한 방식으로 동작한다.

    // 저장할변수, 입력의 크기
    cin.getline(name2, size);
    cout<<name2<<endl;

    string str1;
    cin>>str1;
    cout<<"str1[0] = "<<str1[0]<<endl;
    
}