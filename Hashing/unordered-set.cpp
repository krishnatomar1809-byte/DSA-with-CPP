#include <iostream>
#include <unordered_set>
using namespace std;

int main(){
    unordered_set<int> s ;

    s.insert(1);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(1);

    cout<<s.size()<<endl;

    //count

    if(s.find(3) != s.end()){
        cout<<"3 exits\n";
    }else{
        cout<<"3 does't exit\n";
    }

    //print ele

    for(auto el: s){
        cout<<el<<" ";
    }
}