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


void printIntersaction(vector<int>arr1 , vector<int>arr2){

    unordered_set<int> s;

    for(int el:arr1){                 //storing arr1 element in set
        s.insert(el);
    };

    for(int el:arr2){
        if(s.find(el)!=s.end()){      // set me aese hi find krte h,  arr2 ke element ko set s me find kr rhe h jaha pehele se hi arr1 ke element h 
            cout<<el<<" ";
            s.erase(el);
        };
    }

    cout<<endl;
}


int main(){
    vector<int>arr1={7,3,9};
    vector<int> arr2={6,3,9,2,9,4};

    findunion(arr1,arr2);

    printIntersaction(arr1,arr2);

}