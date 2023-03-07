//program to find factorial of a number
//factorial of 5 = 1*2*3*4*5 = 120
//way 1 iterative approach
#include <iostream>
using namespace std;
//way 2 recursive approach
int getfact(int n){
    if(n==0){
        return 1;
    }else{
        return n* getfact(n-1) ;
    }
}
int main(){
    int n=5;
    int fact=1;
    for(int i=1;i<=n;i++){
        fact = fact*i;
    }
    cout<<fact<<endl;
    cout<<getfact(5);
    return 0;
}