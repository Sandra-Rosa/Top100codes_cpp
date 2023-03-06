//program to print fibonacci series upto a given number
//eg :- 0,1,1,2,3,5..
//The first element will be 0 and second element will be 1
#include<iostream>
using namespace std;
int main(){
    int n=15;
    int a=0;
    int b=1;
    int nextterm;
    cout<<a<<','<<b<<',';
    for(int i=2;i<n;i++){
        nextterm = a+b;
        cout<<nextterm<<",";
        a=b;
        b=nextterm;
    }
    return 0;
}