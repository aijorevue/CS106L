#include<sstream>
#include<iostream>
using namespace std;
int main(){
    ostringstream oss("Ito En Green Tea");
    cout<<oss.str()<<endl;
    double size=16.9;

    oss<<size<<" Ounce";
    cout<<oss.str()<<endl;

    oss<<"Pack of("<<12<<")";
    cout<<oss.str()<<endl;

    istringstream iss(oss.str());
    double amount;
    string unit;

    iss>>amount>>unit;

    cout<<"Now each bottle is sold as: "<<amount/2<<""<<unit;
    return 0;
}