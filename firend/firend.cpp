#include <iostream>
#include <string>
using namespace std;
 
class Friend1 {
private:
    string name;
 
    friend class Friend2;
};
 
class Friend2{
public:
    void set_name(Friend1& f, string s) {
        /*
        Firend1Ŭ�������� name������ private�̱� ������ ������ �Ұ����ؾ� ������
        Friend2�� friend�� �����Ͽ��� ������ private �� protected����� ������ ����������.
        */
        f.name = s;
    }
    void show_name(Friend1& f) {
        cout << f.name << "\n";
    }
};
 
int main(void) {
    Friend1 f1;
    Friend2 f2;
    
    f2.set_name(f1, "����");
    f2.show_name(f1);
 
    return 0;
}