#include <iostream>
using namespace std;
#include <string>

class user{
    int id;
    string password;

    public:
    string username;

    user(int id){
        this->id=id;

    }

    void setpss(string password){
       this->password=password;
    }

    string getpss(){
        return password;
    }
};

int main(){
    user user1(101);
    user1.username="krishna";
    user1.setpss("krishna");
    cout<<user1.getpss();

}