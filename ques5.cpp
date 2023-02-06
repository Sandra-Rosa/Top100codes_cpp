//Find the Greatest of the Two Numbers in C++
#include <iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"C++ program to find the greatest number "<<endl;
    cout<<"Enter the numbers "<<endl;
    cin>>a>>b;
    if(a>b){
        cout<<a<<" greater than "<<b<<endl;
    }
    else if(a==b){
        cout<<a<<" equal to "<<b<<endl;
    }else{
        cout<<b<<" greater than "<<a<<endl;
    }
    return 0;
}