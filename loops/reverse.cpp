#include <iostream>
using namespace std;
int main(){
    int n=18029;
    int last_dig;
    int rev=0;
    while(n>0){
        last_dig=n%10;
        rev=rev*10+last_dig;
        n=n/10;
    }
    cout<<"reverse: "<<rev<<endl;
}