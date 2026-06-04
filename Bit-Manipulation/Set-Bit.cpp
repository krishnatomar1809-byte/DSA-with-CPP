#include <iostream>
using namespace std;

int setbit(int num, int i){
    int bitmask= 1<<i;
    return (num | bitmask);
}
int main(){
    cout<<setbit(10,0);
    return 0;
}