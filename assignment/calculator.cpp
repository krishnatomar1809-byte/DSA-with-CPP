#include <iostream>
using namespace std;

int main(){
    int a,b;
    char op;
    
    cout<<"enter value of a: ";
    cin>>a;
    cout<<"enter the value of b: ";
    cin>>b;
    cout<<"enter the operator: ";
    cin>>op;

    if(op=='+'){
        cout<<"a + b: "<<a+b<<endl;
    }
    else if (op=='-'){
        cout<<"a - b: "<<a-b<<endl;
    }
    else if (op=='*'){
        cout<<"a * b: "<<a*b<<endl;
    }
    else if (op=='/'){
        cout<<"a / b: "<<a/b<<endl;
    }
    else{
        cout<<"invalid operator"<<endl;

    }

}