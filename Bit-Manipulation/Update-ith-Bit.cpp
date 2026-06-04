#include <iostream>
using namespace std;

int updatebit(int num, int i, int val){
    num= (num & ~(1<<i));

    num= (num | (val<<i));

    return num;
}
int main(){
    cout<<updatebit(10,1,1);
    return 0;
}