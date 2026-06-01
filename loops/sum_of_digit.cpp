#include <iostream>
using namespace std;
int main(){
    int n=10829;
    int sum=0;
    while(n>0){
       int last_dig= n%10;
       sum=sum+last_dig;
       n=n/10;
    }
    cout<<sum<<endl;
}