#include <iostream>
using namespace std;

class Car{
    string name;
    string color;

    public:

    Car(){
        cout<<"contructor without para \n";

    }

    Car(string name,string color){
        cout<<"contructor with para \n";

        this->name=name;
        this->color=color;

    }

    string getname(){
        return name;
    }
    string getcolor(){
        return color;
    }

};

int main(){
    Car C1;
    Car c2("maruti800","white");
    cout<<c2.getname()<<endl;
    cout<<c2.getcolor()<<endl;
    return 0;

}