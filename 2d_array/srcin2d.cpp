// Staircase search 
#include <iostream>
using namespace std;
bool srcsort(int arr[][4], int n,int m,int key){
    int i=0;
    int j=m-1;
    while(i<n && j>=0){
        if(key==arr[i][j]){
            cout<<"founded at: "<<"("<<i<<","<<j<<")";
            return true;
        }
        else if(key<arr[i][j]){
            j--;
        }
        else{
            i++;
        }
    }
    cout<<"key not founded";
    return false;
    
}

int main(){
    int arr[4][4]={{10,20,30,40},
                   {15,25,35,45},
                   {27,29,37,48},
                   {32,33,39,50}};

    srcsort(arr,4,4,33);

    
}