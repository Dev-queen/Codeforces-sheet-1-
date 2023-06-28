// Sheet 1
// submitted on 27/6/2023 :>

/*Sn = n(n+1)/2
Hence, this is the formula to calculate sum of 'n' natural numbers.

// G. Summation from 1 to N*/

#include <iostream>
using namespace std;

int main()
{
    long long k,sum ;
    cin >> k ;
    sum = k * (k+1) / 2 ;
    cout<< sum ;

    return 0;
}