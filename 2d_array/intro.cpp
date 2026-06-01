#include <iostream>
using namespace std;

int main(){
    int students[3][3]={{100,100,100},  //// dekh isme 0 se row aur columb dono start hoga index me theek h iskiye thoa confusion hogya tha 
                         {84,74,65},
                        {65,25,32}};
    cout<<students[2][0];
}