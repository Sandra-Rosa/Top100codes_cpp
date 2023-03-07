//program to find the nth term in fibanocci series
//way 1 rcursion
#include <iostream>
using namespace std;
int fibanocci(int n){
    if(n<=1){
        return n;
    }
    return fibanocci(n-1)+ fibanocci(n-2);
}
int f(int n){
    int a=0,b=1,c;
    if(n==0){
        return n;
    }else{
        for(int i=2;i<=n;i++){
            c = a+b;
            a=b;
            b=c;
        }
    }
    return c;
}
//way 2 using 3 variables
int main(){
    int n=5;
    int n1=5;
    cout<<fibanocci(5)<<endl;
    cout<<f(n1);
    return 0;
}