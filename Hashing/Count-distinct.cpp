#include <bits/stdc++.h>
using namespace std;

int countdistinct(vector<int>arr){

     set<int>s;
    
    for(int i=0;i<arr.size();i++){
        s.insert(arr[i]);
    }

    for(int el:s){
        cout<<el<<" ";
    }

    cout<<endl;

    return s.size();

}

int main(){
    vector<int>arr={3,4,2,5,6,7,3,4,2,1};

    cout<<countdistinct(arr)<<endl;
    return 0;

}