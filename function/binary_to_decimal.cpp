#include <iostream>
using namespace std;

// void bintodec(int binnum){
//     int n = binnum;
//     int decnum=0;
//     int pow=1; // 2^1, 2^2....

//     while(n>0){
//         int lastdig = n % 10;
//         decnum += lastdig * pow;
//         pow = pow * 2;
//         n = n/ 10;
//     }
//     cout<<decnum<<endl;

// }

// int main(){
//    bintodec(101);
//    return 0;
// }


// Question1:Convertthefollowingbinarynumbersintodecimalforms:●111111●10110●10011●110010

void bintodec(int binnum){
    int n=binnum;
    int d=0;
    int pow=1;

    while(n>0){
        int lastdig=n%10;
        d += lastdig*pow;
        pow=pow*2;
        n=n/10;
    }
    cout<<d<<endl;

}

int main(){
    bintodec(111111);
    bintodec(10110);
    bintodec(10011);
    bintodec(110010);
    return 0;
}