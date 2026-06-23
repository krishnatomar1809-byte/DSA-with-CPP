#include <iostream>
#include <vector>
using namespace std;

int last_occurrence(vector<int>arr,int i,int target){
    if(i==arr.size()){
        return -1;
    }

    int idx= last_occurrence(arr,i+1,target);
    if(idx==-1 && arr[i]==target){
        return i;
    }
    return idx;
}

int main(){
    vector<int>arr={1,2,3,3,3,4,5};
    cout<<last_occurrence(arr,0,3)<<endl;
    return 0;
}