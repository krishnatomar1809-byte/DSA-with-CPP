#include <iostream>
#include <string>
using namespace std;

void removeduplicate(string str, string ans, int i, int map[]){

    if(i==str.size()){
        cout<<"answer is: "<<ans<<endl;
        return;
    }

    char ch=str[i];        //char ch me str[i] ko store kiya taki map index nikal sake
    int mapidx= (int)(ch-'a');
    if(map[mapidx]==true){   //true h yani pehel wo value aa chuki h 
        return removeduplicate(str,ans,i+1,map);
    }
    else{
        map[mapidx]=true;
        return removeduplicate(str,ans+str[i],i+1,map);

    }

}

int main(){
    string str="aappnnacollege";
    string ans=" ";
    int i=0;
    int map[26]={false};
    removeduplicate(str,ans,i,map);
    return 0;
}