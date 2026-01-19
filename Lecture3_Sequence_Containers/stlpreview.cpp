#include<vector>
#include<cstdlib>
#include<iostream>
#include<algorithm>
#include<iterator>

using std::vector;
using std::cout;
using std::endl;

const int kNumInts=20;

void doBubbleSort(vector<int>& v){
    for(size_t i=0;i<v.size()-1;i++){
        for(size_t j=0;j<v.size()-1-i;j++){
            if(v[j]>v[j+1]){
                int temp=v[j];
                v[j]=v[j+1];
                v[j+1]=temp;
            }
        }
    }
}

int main(){
    vector<int> vec(kNumInts);
    for(size_t i=0;i<vec.size();i++){
        vec[i]=rand();
    }
    doBubbleSort(vec);

    for(size_t i=0;i<vec.size();i++){
        cout<<vec[i]<<endl;
    }
    return 0;
}