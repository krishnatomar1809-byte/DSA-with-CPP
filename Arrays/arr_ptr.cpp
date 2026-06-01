#include <iostream>
using namespace std;

void func(int arr[]){
    arr[0]=1000;   // changes same location pr hi hua h 
}

int main(){
    int arr[]={1,2,3,4,5};

    func(arr);
    cout<<arr[0];

}
