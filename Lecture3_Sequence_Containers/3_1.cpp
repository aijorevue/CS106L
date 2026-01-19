#include<iostream>
#include<string>
class Time{
    private:
        int hour;
        int minute;
    public:
        Time(int h=0,int m=0):hour(h),minute(m){}
};
class Course{
    public:
    string a;
    Time t1;
    Time t2;

};
int main(){
    vector<int> vec{3,1,4,1,5,9};
    Course now{"CS106L",{15,30},{16,30}};\
    return
}