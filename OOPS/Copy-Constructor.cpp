#include <iostream>
using namespace std;

class Car{
    public:
    string name;
    string color;

    Car(string name,string color){
        cout<<"contructor with para \n";

        this->name=name;
        this->color=color;

    };
};    

int main(){
    Car c1("MAruti800", "white");
    Car c2(c1);

    cout<<c2.name<<endl;
    cout<<c2.color<<endl;


}