#ifndef TIMEH
#define TIMEH

using namespace std;

class Time{
private:
    int hours;
    int mins;

public:
    Time();
    Time(int, int);
    void addHours(int);
    void addMins(int);
    Time operator+(Time&);
    Time operator*(int);
    void show();
    ~Time();
    /*
    C++ friend : public에 있는 메소드를 통해 private변수에 접근하지 않고 friend키워드를 사용
    함수를 어떤 클래스에 대해 friend로 만들게 된다면 그 friend함수는 클래스의 멤버함수들이
    가지는 권한과 동등한 접근 권한을 가지게 된다. 즉, public영역에 정의되어있는 멤버함수들
    처럼 friend함수는 private변수에 접근할 수 있게 된다.
    */
    friend Time operator*(int n, Time& t){
        return t*n;
    }
    friend std::ostream& operator<<(std::ostream&, Time&);
};

Time::Time(){
    hours=mins=0;
}

Time::Time(int h, int m){
    hours=h;
    mins=m;
}

void Time::addHours(int h){
    hours+=h;
}

void Time::addMins(int m){
    mins+=m;
    hours+=mins/60;
    mins%=60;
}

Time Time::operator+(Time& t){
    Time sum;
    sum.mins=mins+t.mins;
    sum.hours=hours+t.hours;
    sum.hours+=sum.mins/60;
    sum.mins%=60;
    return sum;
}

void Time::show(){
    cout<<"시간 : "<<hours<<endl;
    cout<<"분 : "<<mins<<endl;
}

Time::~Time(){

}

Time Time::operator*(int n){
    Time result;
    long resultMin=hours*n*60+mins*n;
    result.hours=resultMin/60;
    result.mins=resultMin%60;
    return result;
}

std::ostream& operator<<(std::ostream& os, Time& t){
    os<<t.hours<<"시간"<<t.mins<<"분";
    return os;
}

#endif