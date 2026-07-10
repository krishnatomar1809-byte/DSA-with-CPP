#include <iostream>
#include <vector>
using namespace std;


//Conquer

void merge(int arr[],int st,int end,int mid){
    int i=st;
    int j=mid+1;

    vector<int>temp;

    while(i<=mid && j<=end){

        if(arr[i]>arr[j]){
            temp.push_back(arr[j++]);
        }
        else{
            temp.push_back(arr[i++]);
        }
    }


    while(i<=mid){
        temp.push_back(arr[i++]);
    }
    while(j<=end){
        temp.push_back(arr[j++]);
    }

    for(int i=st, x=0;i<=end;i++){
        arr[i]=temp[x++];
    }
}

//Divide

void mergesort(int arr[],int st,int end){

    //base case

    if(st>=end){
        return;
    }


     int mid= st+(end-st)/2;                 //(st+end)/2;

    mergesort(arr,st,mid);   //left arrray
    mergesort(arr,mid+1,end);  //right array

    merge(arr,st,end,mid);
}
void printarr(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={6,3,7,5,2,4};
    int n=sizeof(arr)/sizeof(int);
    mergesort(arr,0,n-1);
    printarr(arr,n);
    return 0;
}