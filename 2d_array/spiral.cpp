#include <iostream>
using namespace std;
void spiral(int arr[][4],int n, int m){
    int sr=0 , er=n-1;
    int sc=0, ec=m-1;
    while(sr<=er && sc<=ec){

        //top
        for(int j=sc;j<=ec;j++){
            cout<<arr[sr][j]<<" ";
        }

        //right
        for(int i=sr+1;i<=er;i++){
            cout<<arr[i][ec]<<" ";
        }

        // bottom
        for(int j=ec-1;j>=sr;j--){
            if(sr==er){
                break;
            }
            cout<<arr[er][j]<<" ";
        }

        //left
        for(int i=er-1;i>=sr+1;i--){
            if(sc==ec){
                break;
            }
            cout<<arr[i][sc]<<" ";
        }

        sr++;
        sc++;
        er--;
        ec--;

    }
    cout<<endl;
}

int main(){
    int arr[4][4]={{1,2,3,4},
                   {5,6,7,8},
                {9,10,11,12},
                {13,14,15,16}};
    
    spiral(arr,4,4);
    
}