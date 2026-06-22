#include <iostream>
using namespace std;

int dec(int n){
    if (n==0){     //base case
        return 0;
    }

    cout<<n<<" ";   //aapna kaam
    return dec(n-1);  //inner kaam
}

int main(){
    dec(5);
}