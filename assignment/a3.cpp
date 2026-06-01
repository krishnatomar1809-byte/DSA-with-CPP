//Question2:Entercostof3itemsfromtheuser(usingfloatdatatype)-apencil,apenandaneraser.Youhavetooutputthetotalcostoftheitemsbacktotheuserastheirbill.(Addon:Youcanalsotryadding18%GSTtaxtotheitemsinthebillasanadvancedproblem)
#include <iostream>
using namespace std;
int main(){
    float pencil,pen,eraser,total;
    cout<<"enter the cost of pencil: ";
    cin>>pencil;
    cout<<"enter the cost of pen: ";
    cin>>pen;
    cout<<"enter the cost of eraser: ";
    cin>>eraser;
    total=pencil+pen+eraser;
    cout<<"the total value is: "<<total<<endl;

    //for gst
    float gst=total*0.18;
    float total_with_gst=total+gst;
    cout<<"the total value with gst: "<<total_with_gst<<endl;
    return 0;
}