#include <iostream>

using namespace std;

int main(){

    // new 연산자
    /*
    1. 어떤 데이터형을 원하는지 new 연산자에게 알려준다
    2. new 연산자는 그에 알맞는 크기의 메모리 블록을 찾아낸다
    3. 그 블록의 주소를 리턴한다.
    */

    int* pointer=new int;

    // delete 연산자
    /*
    사용한 메모리를 다시 메모리 풀로 환수
    환수된 메모리는 프로그램의 다른 부분이 다시 사용
    */

    int* ps=new int;
    delete ps;
    /*
    delete의 사용규칙
    1. new로 대입하지 않은 메모리는 delete로 해제할 수 없다
    2. 같은 메모리 블록을 연달아 두번 delete로 해제할 수 없다
    3. new[]로 메모리를 대입할 경우 delete[]로 해제한다
    4. 대괄호를 사용하지 않았다면 delete도 대괄호를 사용하지 않아야 한다
    */
}