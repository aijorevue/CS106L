#include<iostream>
using std::cout;
using std::endl;
class Drink{
    public:
        Drink()=default;
        Drink(std::string flavor):_flavor(flavor){}

        virtual void make()=0;
        virtual ~Drink()=default;
    private:
    std::string _flavor;
};

class Tea:public Drink{
    public:
    Tea()=default;
    Tea(std::string flavor):Drink(flavor){}
    void make(){
        cout<<"Made tea from the Tea class!"<<endl;
    }
    ~Tea()=default;
    
    private:
        std::string flavor;
};
int main(){
    Tea t("red");
    t.make();
    return 0;
}