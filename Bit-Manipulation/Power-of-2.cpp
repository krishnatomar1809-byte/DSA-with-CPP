#include <iostream>
using namespace std;

bool poweroftwo(int num){

    int bitmask = num - 1;

    if((num & bitmask) == 0){
        return true;
    }
    else{
        return false;
    }
}