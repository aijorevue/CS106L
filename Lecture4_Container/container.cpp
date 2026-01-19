//Container:vector, list, deque,stack(default=deque)
//associator container:map, set, multimap, multiset
//set<int>::iterator iter=myset.begin();
//cout<<*iter<<endl;
//if(iter==myset.end());

set<int>::iterator itr=container.begin();
while(itr!=container.end()){
    cout<<*itr<<endl;
    ++itr;
}

int numOccuraances(vector<int> &cont,int elem){
    int counter=0;
    vector<int>::iterator iter;
    for(iter=cont.begin();iter!=cont.end();++iter){
        if(*iter==elem){
            ++counter;
        }
    }
    return counter;
}
#include <iostream>
#include <set>

int main() {
    // 1. 定义与初始化
    std::set<int> s;

    // 2. 插入元素
    s.insert(10);
    s.insert(20);
    s.insert(5);
    s.insert(10); // 重复元素，不会被再次插入

    // 3. 遍历 (结果会自动排序: 5 10 20)
    for (int x : s) {
        std::cout << x << " ";
    }
    std::cout << std::endl;

    // 4. 查找元素
    if (s.find(10) != s.end()) {
        std::cout << "找到了 10" << std::endl;
    }

    // 5. 删除元素
    s.erase(20);

    // 6. 获取大小
    std::cout << "大小: " << s.size() << std::endl;

    return 0;
}