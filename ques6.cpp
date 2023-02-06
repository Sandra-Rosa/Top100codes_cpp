//C++ Program to find the Greatest of three numbers
#include <iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"C++ Program to find the Greatest of three numbers"<<endl;
    cout<<"Enter three numbers "<<endl;
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<a<<" is the largest number "<<endl;
        }
        else{
            cout<<c<<"is the largest number "<<endl;
        }
    }else{
        if(b>c){
            cout<<b<<" is the largest number "<<endl;
        }else{
            cout<<c<<"is the largest number "<<endl;
        }
    }
    //using ternary operators

    int temp = a>b ? a : b;
    int result = temp>c ? temp : c;
    cout<<"Largest number is "<<result;
    
    return 0;
}