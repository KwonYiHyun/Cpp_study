#ifndef STOCK
#define STOCK
#include <iostream>

using namespace std;

class Stock
{
private:
    string name;
    int shares;
    float share_val;
    double total_val;
    void set_total(){total_val=shares*share_val;}

public:
    void acquire(string, int, float);
    void buy(int, float);
    void sell(int, float);
    void update(float);
    void show();
    Stock &topval(Stock&);
    Stock(string, int, float);
    Stock();
    ~Stock();
};

Stock &Stock::topval(Stock& s){
    if(s.share_val > share_val){
        return s;
    }else{
        // this�� ����Լ��� ȣ���ϴµ� ���� ��ü�� �����Ѵ�.
        return *this;
    }
}

// StockŬ������ �������� �����ȴ�.
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
    cout<<"ȸ�� �� : "<<name<<endl;
    cout<<"�ֽ� �� : "<<shares<<endl;
    cout<<"�ְ� : "<<share_val<<endl;
    cout<<"�ֽ� �� ��ġ : "<<total_val<<endl;
}

// ��� ���� ���� ������ ::
// "StockŬ������ ���ǵǾ� �ִ� �Լ���" ��� �˷��ش�
// ������
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

// �ı���(C# �Ҹ���)
// ��ü�� ������ ������ �������� �ı��ڰ� �ڵ����� ȣ��ȴ�.
// �ı��ڴ� �Ű������� ���� �� ����.
Stock::~Stock()
{
    cout<<name<<"Ŭ������ �Ҹ�Ǿ����ϴ�."<<endl;
}

#endif