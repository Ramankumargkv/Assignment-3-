#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the A marks = ";
    cin>>a;
    cout<<"Enter the B marks = ";
    cin>>b;
    cout<<"Enter the C marks = ";
    cin>>c;
    if(a<=b && a<=c)
    cout<<"A is a least marks ";
    else if(b<=a && b<=c){
        cout<<"B is a least marks ";
    }
    else{
        cout<<"C is least marks ";
    }
}
