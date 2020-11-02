#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void swap_ref(int &arg1, int &arg2){        //zad2
    int tmp;
    tmp = arg1;
    arg1 = arg2;
    arg2 = tmp;
}


int main(){
    int arg1, arg2;
    cout<<"enter 2 args: ";
    cin>>arg1>>arg2;
    cout<<"arg1 = "<<arg1<<endl<<"arg2 = "<<arg2<<endl;
    cout<<"changing..."<<endl;
    swap_ref(arg1, arg2);
    cout<<"arg1 = "<<arg1<<endl<<"arg2 = "<<arg2<<endl;
    return 0;
}
