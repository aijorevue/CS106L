#include<iostream>
#include<vector>
#include<algorithm>
using std::vector;

using std::endl;
using std::cout;
namespace Lecture{
    int count(const vector<int> &v){
        int ctr=0;
        for(auto i:v){
            ctr++;
        }

    return ctr;
    }
}
int main(){
    vector<int> v{3,1,4,1,5,9};
    int count=0;
    for(auto i:v){
        if(i==1){
            count++;
        }
    }

    cout<<"manual count:"<<count<<endl;

    cout<<"lecture count"<<Lecture::count(v)<<endl;

    cout<<"algorithm count: "<<std::count(v.begin(),v.end(),1)<<endl;
    return 0;

}


template <typename StreamType>
void print(StreamType& stream,int i){
    stream <<i;
}
int main() {
    int val = 42;

    // 1. 输出到控制台 (StreamType 推导为 std::ostream)
    print(std::cout, val);

    // 2. 输出到文件 (StreamType 推导为 std::ofstream)
    std::ofstream outFile("test.txt");
    print(outFile, val);

    // 3. 输出到字符串 (StreamType 推导为 std::stringstream)
    std::stringstream ss;
    print(ss, val);
    
    return 0;
}