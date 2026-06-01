#include <iostream>
using namespace std;

int main(){
    int science;
    int maths;
    int code;
    cout<<"enter marks of science; ";
    cin>>science;
    cout<<"enter the marks of maths: ";
    cin>>maths;
    cout<<"enter the marks of code: ";
    cin>>code;
    int avg= science+maths+code/3;
    cout<<"avg of marks: "<<avg<<endl;
    return 0;

}