#include <iostream>
#include <string>
using namespace std;

void TOH(int n, string src, string helper, string dest){

    //base case

    if(n==1){
        cout<<"move the disk from "<<src<<" to "<<dest<<endl;
        return;
    }


    //move kr rhe h src se b me yani aavi b hai destination aur c bn gya helper

    TOH(n-1,src,dest,helper);

    //pehele upar wala code pura run hoga phir base case hit hoga aur return hoga waha se phir aapna ye neeche wala execution hona start hoga jo bol rha h ki aapni last disk A se C jaa rhi h

    cout<<"move the disk "<<n<<" from "<<src<<" to "<<dest<<endl;

    //disk A se C me chli gyi sbse neeche wali aab usme uper wali bhejni h jo already B me h tho aab function call hoga jisme B src banega aur C aapna dest aur A aapna helper

    TOH(n-1,helper,src,dest);
}


int main(){
    TOH(3,"A","B","C");
}