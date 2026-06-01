// khud kiya h code

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter the number: ";
    cin>>n;
    bool isprime=true;        //isprime bolta h ki number prime h isliye liya h aage agar koi number divide hogya tho boldege ki isprime flase hua h yani wo umber prime nhi h
    for(int i=2;i<n;i++){
        if(n%i==0){
            isprime=false;    //yaha dekh number agar divide hogya kisi number se tho boldege ki prime number nhi h aur break hokr loop se bahar aagayega
            break;
        }
    
    }
    // loop ke bahar esliye likha h kiyuki loop me glt output aarha h tho loop ka kaam bss check krne k h bahar hum usko aage excute karege ki prime likhna h ya not prime
    
    
    if(isprime==true){   //yaha bol rha h ki aapun tk isprime true yaha h yani uper loop me koi number n ko divide nhi kr paya iska mtlv isprime flase nhi hua tho wo n number prime number hoga
        cout<<n<<" is a prime number";
    } else{
        cout<<"not a prime number";
    }
}