#include <iostream>
using namespace std;

int main(){
    int arr[]={5,4,9,6,12};
    int n= sizeof(arr)/sizeof(int);
    int max=arr[0];
    int min=arr[0];
    for(int i=0; i<n;i++){
        if(arr[i]>max){
            max=arr[i];
        }
    }
    cout<<"largest number in the array is " <<max<<endl;

    for(int i=0; i<n;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    cout<<"smallest number in the array is "<< min<<endl;

}