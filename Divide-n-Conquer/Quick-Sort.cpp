#include <bits/stdc++.h>
using namespace std;


void printarr(int arr[], int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}


int partition(int arr[],int st,int end){
    int i=st-1;
    int pivot=arr[end];

    for(int j=st;j<end;j++){
        if(arr[j]<=pivot){
            i++;
            swap(arr[i],arr[j]);
        }
    }

    i++;
    swap(arr[i],arr[end]);

    return i;
}

void quicksort(int arr[],int st, int end){

    if(st>=end){
        return;
    }


    int pivotidx= partition(arr,st,end);

    quicksort(arr , st, pivotidx - 1); //left
    quicksort(arr, pivotidx + 1 , end);  //right
    
}


int main(){
    int arr[6]={6,3,7,5,2,4};
    int n=6;

    quicksort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}