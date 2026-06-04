#include <iostream>
using namespace std;

int getposition(int num,int i){
    int bitmask=1<<i;
    if((num&bitmask)==0){
        return 0;
    }
    else{
        return 1;
    }
}

int main(){
    int num=10;
    int i=1;
    cout<<getposition(num,i)<<endl;
}