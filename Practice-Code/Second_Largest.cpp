#include <bits/stdc++.h>
using namespace std;

int secondLargest(vector<int>& arr){
    if(arr.size()<2){
        return -1;
    }
    
    int largest = arr[0];
    int second= INT_MIN;
    
    
    for(int i=1;i<arr.size();i++){
        if(arr[i]>largest){
            second=largest;
            largest=arr[i];
            
        }
        
        else if(arr[i]<largest && arr[i]>second){
            second=arr[i];
            
        }
        
    }
    
    if(second==INT_MIN){
        return -1;
    }
    
    return second;
}

int main(){
    vector<int>arr={12,35, 1 ,10, 34, 1};
    cout<<secondLargest(arr);
}