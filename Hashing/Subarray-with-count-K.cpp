#include <bits/stdc++.h>
using namespace std;

int countSubarrayWithK(vector<int>arr, int K){
    unordered_map<int,int>m;

    m[0]=1;
    int sum=0;
    int ans=0;

    for(int j=0; j<arr.size() ; j++){
        sum+=arr[j];
        if(m.count(sum-K)){
            ans+=m[sum-K];
        };

        if(m.count(sum)){
            m[sum]++;
        }else{
            m[sum]=1;
        }
    }

    return ans;
}


int main(){
    vector<int>arr={10,2,-2,-20,10};
    int K=-10;

    cout<<countSubarrayWithK(arr,K)<<endl;
    return 0;

}