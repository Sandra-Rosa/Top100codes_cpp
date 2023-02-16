//C++ Program to Check Palindrome Number or not
#include <iostream>
using namespace std;
int main(){
    int n = 12321;
    int reverse=0;
    int num = n;
    while(num!=0){
        reverse = reverse*10 + num%10;
        num = num/10;
    }
    cout<<reverse;
    if(n==reverse){
        cout<<"The given number is palindrome";
    }else{
        cout<<"The given number is not palindrome";
    }
}