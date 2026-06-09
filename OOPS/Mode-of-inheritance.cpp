#include <iostream>
using namespace std;


class Parent{
public:
    int a=10;
};

class Child : public Parent{

};

class child1 : private Parent{

};

class child2 : protected Parent{
};

int main(){
    Child c;
    child1 c1;
    child2 c2;
    cout<<c1.c;
    cout<<c2.b;
    cout<<c.a;
};