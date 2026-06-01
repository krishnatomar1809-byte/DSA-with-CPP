#include <iostream>
using namespace std;
int main(){
    int n=18029;
    int last_dig;
    while(n>0){
        last_dig=n%10;
        cout<<last_dig<<endl;
        n=n/10;
    }
}