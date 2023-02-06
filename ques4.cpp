//Find the Sum of Numbers in a given range in C++
#include <iostream>
using namespace std;
int main(){
    int x,y,sum=0;
    cout<<"C++ program to find the sum of n natural numbers from x in the range y"<<endl;
    cout<<"Enter the number and range"<<endl;
    cin>>x>>y;
    for(int i=x;i<=y;i++){
        sum +=i;
    }
    cout<<sum<<endl;
    //or
    sum = y*(y+1)/2 - x*(x+1)/2 +x;
    cout<<sum;
    return 0;
}