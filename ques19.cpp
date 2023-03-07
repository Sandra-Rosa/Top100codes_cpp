//Program to find all the factors of a number
//way 1 traversing from numbers 1 to n and checking wheather if it can divide the number
//way 2 traversing from 1 to square root of the number
#include <bits/stdc++.h>
using namespace std;
int main(){
    int n=13;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}