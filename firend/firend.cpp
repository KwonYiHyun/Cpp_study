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
        Firend1클래스에서 name변수는 private이기 때문에 접근이 불가능해야 하지만
        Friend2를 friend로 선언하였기 때문에 private 및 protected멤버에 접근이 가능해진다.
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
    
    f2.set_name(f1, "열코");
    f2.show_name(f1);
 
    return 0;
}