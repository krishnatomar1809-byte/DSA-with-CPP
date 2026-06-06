#include <iostream>
#include <string>
using namespace std;

class student{
    string name;
    int roll_no;
    float marks;
public:
    
    void getpercentage(){
        cout<<(marks*10)<<"% \n";
    }

    //setter
    void setname(string nameval){
        name= nameval;
    }

    void setmarks(float marksval){
        marks=marksval;
    }

    //getter

    string getname(){
        return name;
    }

    int getmarks(){
        return marks;
    }

};

int main(){
    student s1; //object
    s1.setname("krishna");
    s1.setmarks(90);

    cout<<s1.getname()<<endl;
    cout<<s1.getmarks();
}