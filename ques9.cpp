//Program to find Prime Numbers in a given range in C++
//program gives all the prime numbers in a given range
#include <iostream>
using namespace std;
bool isprime(int n){
    if(n<2){
        return false;
    }else if(n==2){
        return true;
    }else{
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                return false;
                break;
            }
        }
    }
}
int main(){
    int upper=100,lower=0;
    for(int i=lower;i<=upper;i++){
        if(isprime(i)){
            cout<<i<<" ";
        }
    }
}