#include <bits/stdc++.h>
using namespace std;

void findunion(vector<int>arr1, vector<int>arr2){

    unordered_set<int> s;

    for(int i=0;i<arr1.size();i++){
        s.insert(arr1[i]);
    };

    for(int i=0;i<arr2.size();i++){
        s.insert(arr2[i]);
    };

    for(auto el:s){
        cout<<el<<" ";
    };

}


int main(){
    vector<int>arr1={7,3,9};
    vector<int> arr2={6,3,9,2,9,4};

    findunion(arr1,arr2);

}