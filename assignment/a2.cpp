//Question1:Inaprogram,inputthesideofasquare.Youhavetooutputtheareaofthesquare.Input:n(side)Output:n*n(area)


#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the side of square: ";
    cin>>n;
    int area=n*n;
    cout<<"area of the sqaure: "<<area<<endl;
    return 0;
}