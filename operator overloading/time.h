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
    virtual void show();
    /*
    1. 기초 클래스에서 가상메소드를 선언하면,
    그 함수는 기초 클래스 및 파생되는 클래스에서 모두 가상이 된다.
    2. 객체에 대한 참조를 사용하여, 객체를 지시하는 포인터를 사용하여
    가상 메소드가 호출되면 참조나 포인터를 위해 정의된 메소드를 사용하지 않고
    객체형을 위해 정의된 메소드를 사용한다. > 동적 결합
    3. 상속을 위해 기초 클래스로 사용할 클래스를 정의할 때,
    파생 클래스에서 다시 정의해야 되는 클래스 메소드들은 가상 함수로 선언해야 한다.
    */
    ~Time();
    int getHour() { return hours; }
    int getMins() { return mins; }
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
    void show();
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

void NewTime::show(){
    cout<<"일 : "<<day<<endl;
    cout<<"시간 : "<<getHour()<<endl;
    cout<<"분 : "<<getMins()<<endl;
}

#endif