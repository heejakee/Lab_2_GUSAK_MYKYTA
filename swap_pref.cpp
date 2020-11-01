#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void swap_pref(int &a, int *b){                 //zad3
    int tmp;
    tmp = a;
    a = *b;
    *b = tmp;
}


int main(){
    int arg1, arg2;
    int *bptr = &arg2;
    cout<<"enter 2 args: ";
    cin>>arg1>>arg2;
    cout<<"arg1 = "<<arg1<<endl<<"arg2 = "<<arg2<<endl;
    cout<<"changing..."<<endl;
    swap_pref(arg1, bptr);
    cout<<"arg1 = "<<arg1<<endl<<"arg2 = "<<arg2<<endl;
    return 0;
}