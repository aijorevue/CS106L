string &vector<string>::operator[](size_t index){
    return _elems[index];
}


//copy constructor
StringVector::StringVector(const StringVector& other) noexcept:
    logicalSize(other.logicalSize),allocatedSize(other.allocatedSize){
        elems=new std::string[allocatedSize];
        std::copy(other.begin(),other.end(),begin());
    }

StringVector& StringVector::operator=(const StringVector &other){

    if(this!=&other){

        delete[] elems;
        allocatedSize=other.allocatedSize;
        logicalSize=other.logicalSize;
        elems=new std::string[allocatedSize];
        std::copy(other.begin(),other.end(),begin());
        return *this;
    }
    return *this;
}