#include <bits/stdc++.h>
using namespace std;
void moveZeroes(vector<int>& nums) {
    int j=0;

    for(int i=0;i<nums.size();i++){
        if(nums[i]!=0){
            swap(nums[i],nums[j]);
            j++;
        }
    };

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    };
};

int main(){
    vector<int>nums={0, 0, 1, 0, 2};
    moveZeroes(nums);
}