#include <iostream>
using namespace std;

int binarysrc(int arr[], int key, int i,int n){

    if(i==n){
        return -1;
    }


    if(arr[i]==key){
        return i;
    }
    else{
        return binarysrc(arr,key,i+1,n);
    }


}

int main(){
    int arr[7]={1,2,3,4,5,6,7};
    int n= sizeof(arr)/sizeof(int);
    cout<<binarysrc(arr,5,0,n)<<endl;
    return 0;

}