//program to print all armstrong number in a given interval
//eg if the numbers given are 100 and 400 the result will be 153,370,371
#include <iostream>
#include <math.h>
using namespace std;
int len(int n){
    int len;
    while(n){
        len++;
        n /=10;
    }
    return len;
}
bool isarmstrong(int n){
    int leng = len(n);
    int temp=n;
    int sum =0;
    while(temp!=0){
        int digit = temp%10;
        sum = sum + pow(digit,leng);
        temp /=10;
    }
    if(sum == n){
        return true;
    }else{
        return false;
    }
}
int main(){
    int l=100;
    int h=400;
    for(int i=l;i<=h;i++){
        if(isarmstrong(i)){
            cout<<i;
        }
    }
    return 0;
}