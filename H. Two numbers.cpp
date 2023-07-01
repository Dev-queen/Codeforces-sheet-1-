// H. Two numbers
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double A ,B, flooring,ceiling,rounding,result;
    cin >> A >> B ;
    result = A / B ;
    flooring = floor(result) ;
    ceiling= ceil(result) ;
    rounding= round(result) ;
    cout << "floor "<< A << " / "<< B << " = " << flooring <<endl ; 
    cout << "ceil "<< A << " / "<< B << " = " <<ceiling <<"\n" ; 
    cout << "round "<< A << " / "<< B << " = " << rounding ; 
    return 0;
}
