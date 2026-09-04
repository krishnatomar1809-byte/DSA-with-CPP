#include <iostream>
#include <unordered_map>
#include <map>
using namespace std;

int main(){
    map<string,int> m;

    m["india"]=150;
    m["china"]=150;
    m["usa"]=50;
    m["nepal"]=10;

    for(pair<string,int> country:m){
        cout<<country.first<<","<<country.second<<endl;
    };
}