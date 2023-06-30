// J. Multiples

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int X ,Y, Test1,Test2;
    cin >> X >> Y ;
    Test1 = X % Y == 0;
    Test2 =  Y % X == 0 ;
    
    if ( Test1 || Test2 ){
    cout << "Multiples";
    }
    else {
    cout << "No Multiples";
    }
    return 0;
}