#include<iostream>
#include<sstream>
using namespace std;
int main(){
    ostringstream oss("Ito En Green Tea");

    oss<<16.9;
    fpos pos=oss.tellp()+streamoff(-3);
    oss.seekp(pos);
    oss<<"Black";
//oss.seekp(0,ios::end);
//oss.tellp();
    cout<<oss.str()<<endl;
    return 0;
}