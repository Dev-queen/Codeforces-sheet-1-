// R. Age in Days
#include <iostream>
using namespace std;
int main()
{
   int GivenDays ,noOfyears, Months;
    cin >> GivenDays ;
    noOfyears = GivenDays / 365   ;
    // GivenDays = GivenDays - (365 * noOfyears);
    GivenDays -= 365 * noOfyears;
    Months = GivenDays / 30;
    // Days = Days - Months * 30 
    GivenDays -= 30* Months ;
    cout << noOfyears <<" years"<<"\n"; 
    cout<< Months <<" months"<<endl;
    cout<<GivenDays <<" days";
    return 0;
}