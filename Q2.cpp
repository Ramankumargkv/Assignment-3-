// Q2 Given the radius of the circle predict whether numerically area of this circle is larger than the circumference or not.
#include<iostream>
using namespace std;
int main(){
    int r;
    float pai=3.1415926;
    cout<<"Enetr the radius = ";
    cin>>r;
    float area=pai*r*r;
    cout<<"Area of a circle is = "<<area<<endl;
    float circum=2*pai*r;
    cout<<" Circumfrence of circle is = "<<circum<<endl;
    if(area>circum){
        cout<<"Area of a circle is larger than circumfrance of circe "<<endl;
    }
    else 
    cout<<"Area of a circle is Not larger than circumfrance of circe";
}