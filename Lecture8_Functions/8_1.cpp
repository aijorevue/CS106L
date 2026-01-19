#include<iostream>

// int main(){
//     auto sayHello=[](){
//         std::cout<<"Hello from lamdba"<<std::endl;
//     };
//     sayHello();
//     return 0;
// }
#include<algorithm>

std::vector<int> nums={3,1,4,1,5};

std::sort(nums.begin(),nums.end(),[](int a,int b){
    return a>b;
});

int limit=5;
auto isLessThanLimit=[limit](auto val){
    return val<limit;
};