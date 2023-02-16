//C++ Program to find the Sum of Digits of a Number
/*number = 12345
Sum of digit of number = 1 + 2 + 3 + 4 + 5
Sum = 15*/
//way 1
#include <iostream>
using namespace std;
int sumofnum(int n){
    int sum;
    if(n==0){
         return sum;
    }else{
        sum +=n%10;
        sumofnum(n);
    }
}
int main(){
    int num=12345;
    int sum=0;
    cout<<"The numebr is "<<num;
    while(num!=0){
        sum += num%10;
        num = num/10;
    }
    cout<<"The sum is "<<sum;
    //way 2 recursion method
    sum=0,num=12345;
    //way 3 string method
    sum=0;
    string num1 ="12345";
    if(num==NULL){
        sum=0;
    }else{
       for(int i=0;i<num1.length();i++){
        sum +=num1[i] -48;
       }
    }
    cout<<sum;
    return 0;
}

