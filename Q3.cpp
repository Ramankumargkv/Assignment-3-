// Q3 Any year is input through the keyboard. Write a program to determine whether the year is a leap year or not. (Considering leap year occurs after every 4 years)


#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the year = ";
    cin>>n;
    if (n%4==0 || n%400==0 ){
        cout<<n<<" is Leap year ";
    }
    else if(n%100==0){
        cout<<n<<" is not a leap year ";
    } 
    else {
        cout<<n<<" not a leap year ";
    }

    
}