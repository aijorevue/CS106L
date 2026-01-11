#include<sstream>
#include<iostream>
using namespace std;
int main(){
    ostringstream oss("Ito En Green Tea",ostringstream::ate);
    cout<<oss.str()<<endl;

    oss<<16.9<<" Ounce";
    cout<<oss.str()<<endl;
    return 0;
}