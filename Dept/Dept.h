#include <iostream>

using namespace std;

class Dept{
    int size;
    int *scores;

public:
    Dept(int size){
        this->size = size;
        scores = new int[size];
    }
    // Dept(const Dept &dept);
    // ~Dept();

    int getSize() { return size; }
    void read();
    bool isOver60(int index);
};

// Dept::Dept(const Dept &dept){

// }

// Dept::~Dept(){

// }

void Dept::read(){
    for (int i = 0; i < size; i++)
    {
        cin >> scores[i];
    }
}

bool Dept::isOver60(int index){
    if(scores[index]>60){
        return true;
    }else{
        return false;
    }
}