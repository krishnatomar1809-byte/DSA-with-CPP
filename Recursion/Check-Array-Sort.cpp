#include <iostream>
using namespace std;

bool issort(int arr[] ,int n , int i){
    if(i== (n-1)){
        return true;
    }

    if(arr[i]>arr[i+1]){
        return false;
    }

    return issort(arr,n,i+1);
}

int main(){
    int arr[5]={1,2,3,5,4};
    int n=sizeof(arr)/sizeof(int);
    int i=0;
    cout<<issort(arr,n,i);
}