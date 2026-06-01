#include <iostream>
using namespace std;
void bubblesort(int arr[], int n){
    bool isswap=false;           // iswap ko flase bol diya h aur neeche boldiya h ki jb swap ko tho isswap ko true krdo ye tb use aata h jada jb array already sort ho
    for(int i=0;i<n-1;i++){


        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){         // desending ke liye bss arrow ko ulta krdo
                swap(arr[j],arr[j+1]);
                isswap=true;          // jese hi swap hoga wese hi isswap vi true krdege taki ye pata rahega ki array already sorted nhi hai
            }
        }
    }
    if(isswap=false);
        cout<<"array was already sorted";

}

void selectionsort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int smallest=i;
        for(int j=i+1;j<n;j++){
            if(arr[j]<arr[smallest]){
                smallest=j;
            }
        }
        swap(arr[i],arr[smallest]);
    }

}
void insertionsort(int arr[],int n){
    for(int i=1;i<n;i++){
        int curr=arr[i];
        int prev=i-1;
        while(prev>=0 && arr[prev]>curr){
            swap(arr[prev],arr[prev+1]);
            prev--;
        }
    }
}
int main(){
    int arr[5]{5,4,1,2,3};
    // int arr[10]={1,2,3,4,5,6,7,8,9,10};
    int n=sizeof(arr)/sizeof(int);
    // bubblesort(arr,n);

    // selectionsort(arr,n);

    insertionsort(arr,n);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}