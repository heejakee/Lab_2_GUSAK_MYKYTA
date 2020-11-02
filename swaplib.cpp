#include <iostream>
#include <algorithm>
using namespace std;
//zad5

int main(){
    int x, y;
    int *xptr = &x;
    int *yptr = &y;
    cout<<"Enter x and y: ";
    cin>>x>>y;
    swap(*xptr, *yptr);
    cout<<"After swapping: x = "<<x<<", y = "<<y<<endl;
}
