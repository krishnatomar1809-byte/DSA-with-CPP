 // tilling problem bol rha h ki humko ye batana h ki ek area me kitne tile fix ho skte h ya kitne no of ways h possible unko fit krne ke liye esliye humne vertical aur horizontal dono me fit kiya aur unko add krdiya tho humko number of wways toal ml gye jese n=3 ke liye 3 n of ways , n=2 ke liye 2 no of ways and n=4 ke liye 5 no of ways.


#include <iostream>
#include <string>
using namespace std;

int tillingprob(int n){
    //base case
    
    if(n==0 || n==1){
        return 1;
    }

    //vertical
    int ans1= tillingprob(n-1);   //aab size 2*n-1

    //horizontal

    int ans2=tillingprob(n-2);   // idar size 2*n-2

    return ans1+ans2;
}

int main(){
    cout<<tillingprob(4)<<endl;
    return 0;
}

