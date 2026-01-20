template<typename T>
void swap(T &a,T & b){
    T temp=a;
    a=b;
    b=temp;
}

void swap(T & a,T &b){
    T temp=std::move(a);
    a=std::move(b);
    b=std::move(temp);
}

const int * const myclassMothod(const int * const & param)const;
