//Find the Sum of N Natural Numbers in C++
#include <iostream>
using namespace std;
int main(){
    int n,sum=0;
    cout<<"C++ program to find the sum of n natural numbers"<<endl;
    cout<<"Enter a number"<<endl;
    cin>>n;
    for(int i=0;i<=n;i++){
        sum +=i;
    }
    cout<<"The sum of "<<n<<" natural number is "<<sum<<endl;
    return 0;
}