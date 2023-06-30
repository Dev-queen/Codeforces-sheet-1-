// U. Float or int

#include <iostream>
using namespace std;
int main()
{
    double myNum , remainder ;int  IntNum; 
    cin >>  myNum ; 
    IntNum = (int)myNum ;
    remainder = myNum -  IntNum;
    if(myNum == IntNum)
    cout << "int "<< myNum ; 
    
    else {
     cout << "float "<< IntNum << " "<< remainder ;
    }
        

    return 0;
}