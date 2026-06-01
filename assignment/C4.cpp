#include <iostream>
using namespace std;

int main() {
    int age;
    cout<<"enter ur age: ";
    cin>>age;
    if(age<=18){
        cout<<"he can't vote"<<endl ;
    }
    else{
        cout<<"can vote"<<endl;
    }
    
    //largest between two numbers
    
    int num1;
    cout<<"enter the num 1: ";
    cin>>num1;
    int num2;
    cout<<"enter the num 2: ";
    cin>>num2;

    if(num1>num2){
        cout<<"print num 1 is largest";
    }
    else{
        cout<<"num2 is largest";
    }
        
    
    return 0;
}