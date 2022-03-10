#include "Stock.h";
#include <iostream>

// Stock클래스의 사용범위에 결정된다.
void Stock::acquire(string co, int n, float pr){
    name=co;
    shares=n;
    share_val=pr;
    set_total();
}

void Stock::buy(int n, float pr){
    shares+=n;
    share_val=pr;
    set_total();
}

void Stock::sell(int n, float pr){
    shares-=n;
    share_val=pr;
    set_total();
}

void Stock::update(float pr){
    share_val=pr;
    set_total();
}

void Stock::show(){
    cout<<"회사 명 : "<<name<<endl;
    cout<<"주식 수 : "<<shares<<endl;
    cout<<"주가 : "<<share_val<<endl;
    cout<<"주식 총 가치 : "<<total_val<<endl;
}

Stock Stock::topval(Stock& s){
    if(s.share_val > share_val){
        return s;
    }else{
        // this는 멤버함수를 호출하는데 사용된 객체를 지시한다.
        return *this;
    }
}

// 사용 범위 결정 연산자 ::
// "Stock클래스에 정의되어 있는 함수다" 라고 알려준다
// 생성자
Stock::Stock(string co, int n, float pr)
{
    name=co;
    shares=n;
    share_val=pr;
    set_total();
}

Stock::Stock(){
    name="";
    shares=0;
    share_val=0;
    set_total();
}

// 파괴자(C# 소멸자)
// 객체의 수명이 끝나는 시점에서 파괴자가 자동으로 호출된다.
// 파괴자는 매개변수를 가질 수 없다.
Stock::~Stock()
{
    cout<<name<<"클래스가 소멸되었습니다."<<endl;
}