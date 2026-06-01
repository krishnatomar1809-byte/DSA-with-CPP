#include <iostream>
using namespace std;
int main(){
    int n=18029;
    int sum =0;
    while(n>0){
        int last_dig= n%10;
        if(last_dig%2!=0){
            sum=sum+last_dig;
        }
        n=n/10;
    }
    cout<<"sum: "<<sum<<endl;
}