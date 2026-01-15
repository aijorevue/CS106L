#include<iostream>
#include<string>
#include<sstream>
#include<vector>
#include<set>
#include<algorithm>

void printVec(const std::vector<int>&v){
    for(auto elem:v){
        std::cout<<elem<<" ";
    }
    std::cout<<std::endl;
}

int main(){
    std::vector<int> vec{3,1,4,1,5,9,2,6,5,3};

    std::cout<<"Before sort"<<std::endl;
    printVec(vec);
    std::sort(vec.begin(),vec.end());
    printVec(vec);
    std::cout<<"After sort"<<std::endl;
    const int elemToFind=3;

    std::cout<<"Finding element..."<<std::endl;
    auto it=std::find(vec.begin(),vec.end(),elemToFind);
    std::cout<<"Found"<<elemToFind;
    std::cout<<std::endl;

    set<int> mySet{1,3,57,137};

    set<int>::iterator iter=mySet.lower_bound(2);
    set<int>::iterator end=mySet.upper_bound(57);

    while(iter!=end){
        std::cout<<*iter<<std::endl;
        iter++;
    }
    return 0;
}