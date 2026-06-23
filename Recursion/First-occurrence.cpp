#include <iostream>
#include <vector>
using namespace std;

int first_occurrence(vector<int>arr,int i,int target){
    int n=arr.size();

    if(i==n){
        return -1;
    }

    if(target==arr[i]){
        return i;
    }

    return first_occurrence(arr,i+1,target);
}

int main(){
    vector<int>arr={1,2,3,3,3,4,5};
    int i=0;
    int target=3;

    cout<<first_occurrence(arr,i,target);
    return 0;
}
