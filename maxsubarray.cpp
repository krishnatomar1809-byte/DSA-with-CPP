#include <iostream>
using namespace std;

void maxsubarr(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        for(int end=start;end<n;end++){
            int currsum=0;
            for(int i=start;i<=end;i++){
                currsum+=arr[i];
            }
            cout<<currsum<<",";
            maxsum=max(currsum,maxsum);
        }
        
        cout<<endl;
    }
    cout<<"maximum sum of the subarray is "<<maxsum;

}

void maxsubarr2(int arr[],int n){
    int maxsum=INT_MIN;
    for(int start=0;start<n;start++){
        int currsum=0;
        for(int end=start;end<n;end++){
            currsum+=arr[end];
            maxsum=max(currsum,maxsum);
        }
        
        cout<<endl;
    }
    cout<<"maximum sum of the subarray is "<<maxsum;

}


void maxsubarr3(int arr[],int n){
    int currsum=INT_MIN;
    int maxsum=0;
    for(int i=0;i<n;i++){
        currsum+=arr[i];
        maxsum=max(currsum,maxsum);
        if(currsum<0){
            currsum=0;
        }
    }
    cout<<maxsum;
}



int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int n= sizeof(arr)/sizeof(int);

    maxsubarr3(arr,n);
}