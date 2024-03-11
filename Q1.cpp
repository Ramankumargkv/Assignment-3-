// Q1  Take 2 integers input and print the greatest of them.

#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter First Number = ";
    cin>>x;
    cout<<"Enter second Number = ";
    cin>>y;
    if(x>y){
        cout<<" Greatest Number is = "<<x;
    }
    else if (x==y)
    {
        cout<<"Both Number is Equal ";
    }
    
    else cout<<"Greatest Number is = "<<y;
}