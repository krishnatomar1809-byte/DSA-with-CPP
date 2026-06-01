#include <cstring>
#include <iostream>
using namespace std;

// int main(){
//     char arr[50]={'c','o','d','e','\0'};
//     cout<< strlen(arr)<<endl;
//     return 0;
// }


int main(){
    char arr[50];
    cin.getline(arr,50, '.');

    cout<<"your sentence is; "<<arr<<endl;
    cout<<"length of your sentence is; "<<strlen(arr)<<endl;
    return 0;

}