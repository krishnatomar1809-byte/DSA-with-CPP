#include <iostream>
#include <cstring>
using namespace std;

void convertupper(char word[],int n ){
    for(int i=0;i<n;i++){
        char ch=word[i];  //ch ko banaya h bss check krne ke liye
        if(ch>='A' && ch<='Z'){
            continue;
        } else{
            word[i]=ch-'a'+'A';
        }

    }
}

int main(){
    char word[]="ApPle";

    convertupper(word,strlen(word));

    cout<<word<<endl;

}