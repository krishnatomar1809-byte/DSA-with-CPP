#include <iostream>
#include <unordered_map>
using namespace std;

int main(){
    unordered_map<string, int> m;

    m["china"]=150;
    m["india"]=150;
    m["usa"]=50;
    m["nepal"]=10;

    for(pair<string , int> country: m){
        cout<<country.first<<","<<country.second<<endl;
    }

    //remove

    m.erase("nepal");

    //count

    if(m.count("Nepal")){
        cout<<"nepal exist\n";
    }else{
        cout<<"nepal does not exist\n";
    };

}