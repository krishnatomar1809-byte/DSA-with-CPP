#include <bits/stdc++.h>
using namespace std;

int main(){

    vector<int>arr={-2,1,-3,4,-1,2,1,-5,4};

    int sum=0;
    int ans=INT_MIN;

    for(int el:arr){
        sum+=el;
        ans=max(sum,ans);


        if(sum<0){
            sum=0;
        }
    }
    cout<<ans;
    return 0;
}