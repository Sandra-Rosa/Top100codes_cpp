//Check Whether a Number is Even or Odd in C++
#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"C++ code to find if a number is odd or even"<<endl;
    cout<<"Enter a number"<<endl;
    cin>>n;
    if(n%2==0){
        cout<<"The number is even"<<endl;
    }else{
        cout<<"The number is odd"<<endl;
    }
    return 0;
}