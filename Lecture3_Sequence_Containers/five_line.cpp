#include<iostream>
#include<vector>
#include<cstdlib>
#include<algorithm>
#include<iterator>

const int kNumIntd = 10;

int main(){
    std::vector<int> vec(kNumIntd);
    std::generate(vec.begin(),vec.end(),rand);
    std::sort(vec.begin(),vec.end());
    std::copy(vec.begin(),vec.end(),std::ostream_iterator<int>(std::cout,"\n"));
    return 0;
    
}