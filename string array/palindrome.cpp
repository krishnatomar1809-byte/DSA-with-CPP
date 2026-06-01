#include <iostream>
#include <cstring>
using namespace std;

bool ispalindrome(char str[],int n){
    int st=0, end=n-1;
    while(st<end){
        if(str[st++]!=str[end--]){
            cout<<"it is not palindrome"<<endl;
            return false;

        }
    }
    cout<<"it is the palindrome"<<endl;
    return true;
}


int main(){
    char str[]="apple";
    ispalindrome(str,strlen(str));
    return 0;

}