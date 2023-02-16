//C++ Program to Check whether a number is Armstrong number or not
//371 = 3^3+7^3+1^3
#include <iostream>
using namespace std;
int main(){
    int n=371;
    int rem=n;
    int result=0;
    int n1;
    while(rem!=0){
        n1 = rem%10;
        n1 = n1*n1*n1;
        result += n1;
        rem = rem/10;
    }
    if(result==n){
        cout<<"This is an amstrong number";
    }
    else{
        cout<<"Not an armstrong number";
    }
}