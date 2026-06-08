#include <iostream>
using namespace std;

class animal{
    public:
    string color;

    void eats(){
        cout<<"eats..."<<endl;
    }

    void breath(){
        cout<<"breath"<<endl;
    }

};

class fish : public animal{
    public:
    int fins;
    void swim(){
        cout<<"swim"<<endl;
    }


};


int main(){
    fish f1;
    f1.fins=3;

    cout<<f1.fins<<endl;
    f1.eats();
    f1.breath();
}