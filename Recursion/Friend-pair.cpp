#include <iostream>
#include <string>
using namespace std;

int friendpair(int n){

    //base case

    if(n==1 || n==2){
        return n;
    }


    // //singal
    // friendpair(n-1);

    // //pair

    // n-1*friendpair(n-2);

        return friendpair(n-1) + (n-1) * friendpair(n-2);
    
}

int main(){
    cout<<friendpair(4);
    return 0;
}