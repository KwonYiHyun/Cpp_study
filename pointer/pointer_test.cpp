#include <iostream>

using namespace std;

int main(){

    int n;
    cin>>n;

    int* save=new int[n];

    for (int i = 0; i < n; i++)
    {
        cin>>save[i];
    }
    
    for (int i = 0; i < n; i++)
    {
        cout<<i<<"��° ���� : "<<save[i]<<endl;
    }
    

}