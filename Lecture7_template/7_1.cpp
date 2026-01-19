template<typename InputIterator,typename DataType>
int countOccurences(InputIterator begin,InputIterator end,DataType val){
    int count=0;
    for(auto iter=begin;iter!=end;iter++){
        if(*iter==val){
            count++;
        }
    }
    return count;
}