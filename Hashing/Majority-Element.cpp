#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    int arr[9]={1,3,2,5,1,3,1,2,1};
    int n=9;

    unordered_map<int,int> m;

    for(int i=0;i<n;i++){

        if(m.count(m[arr[i]])){
            m[arr[i]]++;
        }else{
            m[arr[i]]=1;
        }

    };

    for(pair<int,int>freq: m){

        if(freq.second> n/3){
            cout<<"majority element was: "<<freq.first<<endl;
        };
        cout<<freq.first<<","<<freq.second<<endl;
    }
}