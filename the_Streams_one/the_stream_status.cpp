#include <sstream>
#include <iostream>
using namespace std;

int main(int argc,char* argv[]) {
    istringstream iss(argv[1]);

    // 检查状态
    if (iss.good()) cout << "good" << endl;
    if (iss.fail()) cout << "fail" << endl;
    if (iss.eof())  cout << "eof" << endl;
    if (iss.bad())  cout << "bad" << endl;
//if(iss.fail()) throw domain_error();
    return 0;
}
