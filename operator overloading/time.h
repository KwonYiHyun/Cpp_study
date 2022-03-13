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
    C++ friend : public�� �ִ� �޼ҵ带 ���� private������ �������� �ʰ� friendŰ���带 ���
    �Լ��� � Ŭ������ ���� friend�� ����� �ȴٸ� �� friend�Լ��� Ŭ������ ����Լ�����
    ������ ���Ѱ� ������ ���� ������ ������ �ȴ�. ��, public������ ���ǵǾ��ִ� ����Լ���
    ó�� friend�Լ��� private������ ������ �� �ְ� �ȴ�.
    */
    friend Time operator*(int n, Time& t){
        return t*n;
    }
    friend std::ostream& operator<<(std::ostream&, Time&);
};

/*
���
1. ������ Ŭ������ ���ο� ����� �߰��� �� �ִ�.
2. Ŭ������ ��Ÿ���� �ִ� �����Ϳ� �ٸ� ���� �� �߰��� �� �ִ�.
3. Ŭ���� �޼ҵ尡 �����ϴ� ����� ������ �� �ִ�.
*/
class NewTime : public Time{
    /*
    1. �Ļ� Ŭ�������� ��ü �ȿ��� ���� Ŭ�������� ������ ������� ����ȴ�.
    2. �Ļ� Ŭ�������� ��ü�� ���� Ŭ�������� �޼ҵ���� ����� �� �ִ�.
    3. �Ļ� Ŭ������ �ڱ� �ڽ��� �����ڸ� �ʿ�� �Ѵ�.
    4. �Ļ� Ŭ������ �ΰ����� ������ ������ ��� �Լ����� ���Ƿ� �߰��� �� �ִ�.
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
    cout<<"�ð� : "<<hours<<endl;
    cout<<"�� : "<<mins<<endl;
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
    os<<t.hours<<"�ð�"<<t.mins<<"��";
    return os;
}

NewTime::NewTime() : Time(){
    day=0;
}

NewTime::NewTime(int h, int m, int d) : Time(h,m){
    day=d;
}

void NewTime::print(){
    cout<<"�� : "<<day<<endl;
    show();
}

#endif