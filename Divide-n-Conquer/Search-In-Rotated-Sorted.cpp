#include <bits/stdc++.h>
using namespace std;


int search(int arr[],int st, int end, int target){
    //base case

    if(st>end){
        return -1;
    }

    int mid= st+(end-st)/2;
    
    if(arr[mid]==target){
        return mid;
    }

    //case 1

    if(arr[st]<arr[mid]){

        if(arr[st]<=target && target<arr[mid]){
            return search(arr,st, mid-1 , target);
        }
        else{
            return search(arr, mid+1, end ,target);
        }
    }
    //case 2
    else{

        if(arr[mid]<target && target<=arr[end]){
            return search(arr, mid+1,end,target);
        }
        else{
            return search(arr,st,mid-1,target);
        }

    }

}



int main(){

    int arr[7]={4,5,6,7,0,1,2};
    int target=0;
    int st=0;
    int end=7;
    cout<<"idx: "<<search(arr,st,end,target);
    cout<<endl;
    return 0;



}