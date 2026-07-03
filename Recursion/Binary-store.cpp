#include <iostream>
#include <string>
using namespace std;


void binarystore(int n, int lastplace, string ans){

    //base case

    if(n==0){
        cout<<ans<<endl;
        return;
    }


    //check last place kya h zero h ya 1

    if(lastplace != 1){
        binarystore(n-1,0, ans+"0");
        binarystore(n-1,1, ans+"1");
    }
    else{
        binarystore(n-1,0,ans+"0");
    }
}

int main(){
    string ans="";
    binarystore(3,0,ans);
    return 0;
}