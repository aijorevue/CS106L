//endl,dole;
#include<sstream>
#include<iostream>
using namespace std;
int main(){
    string name;
    cin>>name;
    cout<<"Hello, "<<name<<endl;
    getline(cin,name,'\n');
    cout<<"Hello, "<<name<<endl;
return 0;
}
//tips:输入流遇到空格会停止读取，而getline可以读取整行包括空格
//注意getline的第三个参数是可选的，表示读取到该字符就停止，默认是换行符
//endl是输出流的操纵符，表示换行并刷新缓冲区
//dole是输入流的操纵符，表示丢弃当前行剩余内容直到换行符
//永远不要混用cin和getline，因为cin不会读取换行符，导致getline直接读取到换行符而结束