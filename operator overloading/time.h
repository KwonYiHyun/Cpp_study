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

/*
상속
1. 기존의 클래스에 새로운 기능을 추가할 수 있다.
2. 클래스가 나타내고 있는 데이터에 다른 것을 더 추가할 수 있다.
3. 클래스 메소드가 동작하는 방식을 변경할 수 있다.
*/
class NewTime : public Time{
    /*
    1. 파생 클래스형의 객체 안에는 기초 클래스형의 데이터 멤버들이 저장된다.
    2. 파생 클래스형의 객체는 기초 클래스형의 메소드들을 사용할 수 있다.
    3. 파생 클래스는 자기 자신의 생성자를 필요로 한다.
    4. 파생 클래스는 부가적인 데이터 멤버들과 멤버 함수들을 임의로 추가할 수 있다.
    */
private:
    int day;
public:
    NewTime();
    NewTime(int, int, int);
    void print();
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

NewTime::NewTime() : Time(){
    day=0;
}

NewTime::NewTime(int h, int m, int d) : Time(h,m){
    day=d;
}

void NewTime::print(){
    cout<<"일 : "<<day<<endl;
    show();
}

#endif