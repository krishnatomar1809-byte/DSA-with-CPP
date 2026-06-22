#include <iostream>
using namespace std;

int sumnum(int n){
    if(n==0){
        return n;
    }

    return n + sumnum(n-1);
}

int main(){
    cout<<sumnum(5);
}