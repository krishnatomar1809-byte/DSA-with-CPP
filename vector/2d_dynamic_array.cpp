#include <iostream>
using namespace std;

int main(){

    int rows; 
    int cols;
    cout<<"enter number of rows: ";
    cin>>rows;
    cout<<"enter the number of cols: ";
    cin>>cols;

    int* *matrix= new int*[rows];    //array of pointers
    for(int i=0;i<rows;i++){
        matrix[i]=new int[cols];     // pointer me array ko define kr rhe
    }

    //data store
    int x=1;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            matrix[i][j]=x++;
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }


}