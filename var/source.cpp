#include <iostream>
// INT_MAX등의 키워드를 위해서 선언
#include <climits>

using namespace std;

int main(){

    int n_int=INT_MAX;
    short n_short=SHRT_MAX;
    long n_long=LONG_MAX;
    long long n_llong=LLONG_MAX;

    cout<<"int는 "<<sizeof(n_int)<<"바이트이다."<<endl;
    cout<<"int의 최대값은 "<<n_int<<"이다."<<endl;

    cout<<"short는 "<<sizeof(n_short)<<"바이트이다."<<endl;
    cout<<"short의 최대값은 "<<n_short<<"이다."<<endl;

    cout<<"long은 "<<sizeof(n_long)<<"바이트이다."<<endl;
    cout<<"long의 최대값은 "<<n_long<<"이다."<<endl;

    cout<<"longlong은 "<<sizeof(n_llong)<<"바이트이다."<<endl;
    cout<<"longlong의 최대값은 "<<n_llong<<"이다."<<endl;

    // unsigned -> 음수값을 안넣을것이다.
    // 음수를 넣을 시 최대값에서 부터 세진다
    unsigned int a;
    unsigned short b;
    unsigned long c;
    unsigned long long d;
    
}