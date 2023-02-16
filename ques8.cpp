// prime number is a numbber which will not have any factors
// way 1- Simple iterative solution
#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    int a = 0;
    int n = 21;
    int count = 0;
    for (int i = 1; i < n + 1; i++)
    {
        if (n % i == 0)
        {
            count += 1;
        }
    }
    if (count == 0 || count == 1)
    {
        cout << "The  number is prime";
    }
    else
    {
        cout << "The number is not prime";
    }
    /*Any prime number n would not be divisible in the range [2, n-1]
1, 0 and negative numbers are not prime*/
    // way 2 optimising by n
    bool isprime = true;
    if (n < 2)
    {
        isprime = false;
    }
    else
    {
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                isprime = false;
                break;
            }
        }
    }
    string c = isprime ? "prime" : "Not prime";
    cout << c;
    //way 3 optimising by n/2
    //way 4 optimising by root n
    // if(n<2){
    //     cout<<"Not prime";
    // }else{
    //     for(int i=0;i<sqrt(n);i++){
    //         if(n%i==0){
    //             cout<<"Not prime";
    //             break;
    //         }
    //     }
    // }
    return 0;
}
//way 5 Optimization by skipping even iteration