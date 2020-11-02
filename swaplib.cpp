#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int x, y;
    int *xptr = &x;
    int *yptr = &y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    swap(*xptr, *yptr);
    cout<<"After swapping: x = "<<x<<", y = "<<y<<endl;
}