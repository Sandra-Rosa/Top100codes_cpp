//Program to check wheather a given number is armstrong or not
//eg : 407 = 4^3+0^3+7^3;
//format = abcd = a^n +b^n + c^n + d^n n:number of digits
#include <iostream>
#include<math.h>
using namespace std;
int len(int n){
    int len=0;
    while(n){
        len++;
        n /=10;
    }
    return len;
}
bool isarmstrong(int n,int len){
    int sum =0;
    int temp=n;
    while(temp>1){
        int digit = temp%10;
        sum = sum + pow(digit,len);
        temp = temp/10;
    }
    if(sum == n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int n = 407;
    int leng = len(n);
    bool flag = isarmstrong(n,leng);
    if(flag){
        cout<<"Armstrong number";
    }else{
        cout<<"Not an armstrong number";
    }
    return 0;
}