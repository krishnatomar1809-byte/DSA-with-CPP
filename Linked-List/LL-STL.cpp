#include <bits/stdc++.h>
using namespace std;

void printList(list <int> ll){
    list<int>::iterator itr;

    for(itr=ll.begin();itr!=ll.end();itr++){
        cout<<(*itr)<<"->";
    }
};

int main(){
    list<int>ll;
    ll.push_front(2);
    ll.push_front(1);

    ll.push_back(3);
    ll.push_back(4);


    cout<<ll.size()<<endl;

    ll.pop_back();
    ll.pop_front();

    printList(ll);
    return 0;

}