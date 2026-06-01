#include <iostream>
using namespace std;

void water(int bar[],int n){
    int leftmax[20000] ,  rightmax[20000]; 
    leftmax[0]=bar[0];
    rightmax[n-1]=bar[n-1];

    for(int i=1;i<n;i++){
        leftmax[i]=max(bar[i-1],leftmax[i-1]);
    }

    for(int i=n-2;i>=0;i--){
        rightmax[i]=max(bar[i+1],rightmax[i+1]);
    }

    int watertrapped=0;
    for(int i=0;i<n;i++){
        int currtrap= min(leftmax[i],rightmax[i])-bar[i];
        if(currtrap>0){
            watertrapped+=currtrap;
        }
    }
    cout<<"the water trapped is "<<watertrapped;
}




int main(){
    int bar[7]={4,2,0,6,3,2,5};
    int n=sizeof(bar)/sizeof(int);

    water(bar,n);
}