#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

void swap_low(int *arg1, int *arg2){        //zad1
    int tmp;
    if(*arg2<*arg1){
        tmp = *arg1;
        *arg1 = *arg2;
        *arg2 = tmp;
    }
}

int main(){
    int arg1, arg2;
    int *aptr = &arg1;
    int *bptr = &arg2;
    cout<<"enter 2 args: ";
    cin>>arg1>>arg2;
    cout<<"arg1 = "<<arg1<<endl<<"arg2 = "<<arg2<<endl;
    cout<<"changing..."<<endl;
    swap_low(aptr, bptr);
    cout<<"arg1 = "<<arg1<<endl<<"arg2 = "<<arg2<<endl;
    return 0;
}
