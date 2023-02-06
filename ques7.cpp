//Program to Check Whether a Year is a Leap Year or Not in C++
#include <iostream>
using namespace std;
int main(){
    int year;
    cout<<"Program to Check Whether a Year is a Leap Year or Not in C++"<<endl;
    cout<<"Enter the year "<<endl;
    cin>>year;
    if(year%400==0){
        cout<<"Leap year "<<endl;
    }
    else if( year%4 ==0 && year%100!=0){
        cout<<"Leap year"<<endl;
    }else{
        cout<<"Not a leap year"<<endl;
    }
    return 0;
}