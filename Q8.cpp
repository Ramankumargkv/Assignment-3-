#include <iostream>

using namespace std;
int main() {
    int x1,x2,x3,y1,y2,y3;
    cout<<"Enter the first Points = "<<endl;
    cin>>x1>>y1;
    cout<<"Enter the second Points = "<<endl;
    cin>>x2>>y2;
    cout<<"Enter the third  Points = "<<endl;
    cin>>x3>>y3;
   float slope1 = (y2 - y1) / (x2 - x1);
   float slope2 = (y3 - y2) / (x3 - x2);

    if (slope1 == slope2) {
        cout << "All  points lie on the same line";
    } else {
        cout << "All  points do not lie on the same line";
    }
    
    
} 