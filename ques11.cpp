//program to reverse a string
/*Number: 5678
Reverse: 8765*/
#include <iostream>
using namespace std;
int main(){
    int n=1234;
    int reverse=0;
    while(n!=0){
        reverse = reverse*10 + n%10;
        n=n/10;
    }
    cout<<reverse;
    return 0;
}
//way 2 recursion
//way 3 recursion with exception