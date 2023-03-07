//program to find the power of a number
//if base and exponent is given we want to be able to find the power
//way 1 built in function
// #include <math.h>
// pow(base,expo)
#include <iostream>
using namespace std;
int main(){
    //way 2 without built in functions and when the base and exponent is decimal and integers
    int base1 = 5;
    int expo1 = 3;
    int res1=1;
    while(expo1!=0){
        res1 = res1*base1;
        expo1--;
    }
    cout<<res1<<endl;
    //way 3 without built in functions and when exponent is negetive or posetive
    int base2 = 5;
    int expo2 = -2;
    int res2=1;
    while(expo2>0){
        res2 = res2 * base2;
        expo2--;
    }
    while(expo2<0){
        res2 = res2/base2;
        expo2++;
    }
    cout<<res2<<endl;
    return 0;
}
//way 4 using reursive method when exponent is integer
