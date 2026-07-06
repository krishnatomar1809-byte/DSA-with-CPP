#include <iostream>
#include <unordered_map>
using namespace std;
int main(){
    unordered_map<int,int>mp;

    int x;
    while(cin>>x){
        mp[x]++;
    }

    for(auto i:mp){
        if(i.second==1){
            cout<<i.first<<endl;
            break;
        }
    }

    return 0;

}