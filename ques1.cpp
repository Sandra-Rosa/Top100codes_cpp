//Given an integer input, The objective is to write a code to Check if a Number is Positive or Negative in C++ Language.
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"C++ code to check wheather a number is posetive or negetive"<<endl;
    cout<<"Enter the number"<<endl;
    cin>>n;
    if(n>=0){
        cout<<"The number is posetive"<<endl;
    }else{
        cout<<"The number is negetive"<<endl;
    }
    return 0;
}