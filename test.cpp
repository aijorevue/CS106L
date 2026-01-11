#include<iostream>
#include<sstream>
using namespace std;
int main() {
    ostringstream oss("Ito En Green Tea");
    cout<<oss.str()<<endl;
    oss<<16.9<<"Ounce";
    cout<<oss.str()<<endl;

    istringstream iss(oss.str());
    double amount;
    string unit;

    iss>>amount>>unit;

    cout<<"Now each bottle is sold as: "<<amount/2<<""<<unit;
    return 0;
}