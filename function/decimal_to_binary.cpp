#include <iostream>
using namespace std;

// void dectobin(int decnum){
//     int n = decnum;
//     int b = 0;
//     int pow=1;

//     while(n>0){
//         int rem = n%2;
//         b += rem * pow;
//         pow= pow*10;
//         n=n/2;
//     }
//     cout<<b<<endl;
// }

// // int main(){
// //     dectobin(7);
// //     return 0;
// // }

//Question2:Convertthefollowingdecimalnumbersintobinaryforms:●25●49●31●88

void dectobin(int decnum){
    int n= decnum;
    int b=0;
    int pow=1; //10^1

    while(n>0){
        int lastdig= n %2;
        b += lastdig*pow;
        pow= pow*10;
        n= n/2;
    }
    cout<<b<<endl;
}

int main(){
    dectobin(25);
    dectobin(31);
    dectobin(45);
    dectobin(88);
    return 0;
}