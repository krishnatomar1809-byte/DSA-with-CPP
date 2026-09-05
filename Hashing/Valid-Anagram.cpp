#include <bits/stdc++.h>
using namespace std;

bool validAnagram(string s, string t){

    if(s.size()!=t.size()){
        return false;
    }
    //store s in map

    unordered_map<char,int>freq;

    for(int i=0;i<s.size();i++){
        if(freq.count(s[i])){               // check kr rha h ki freq map me s of i yani s ke index hai ya nhi
            freq[s[i]]++;                  //freq update kr rhe h agar hai tho
        }
        else{
            freq[s[i]]=1;
        };
    };

    for(int i=0; i<t.size();i++){
        if(freq.count(t[i])){
            freq[t[i]]--;

            if(freq[t[i]]==0){                    // erase kr rhe h ki agar kisi key ki value 0 hogyi h tho erase krdo wrna -ve store hoga
                freq.erase(t[i]);
            }
        }else{
            return false;
        };
    };

    return freq.size()==0;

};



int main(){
    string s="race";
    string t="care";

    cout<<validAnagram(s,t)<<endl;
};