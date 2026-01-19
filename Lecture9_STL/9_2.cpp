#include<iostream>
#include<fstream>
#include<string>
#include<vector>

using std::endl;
using std::cout;
using std::ifstream;
using std::string;
using std::vector;

string fileToString (ifstream& file){
    string ret="";
    string line;
    while(std::getline(file,line)){
        std::transform(line.begin(),line.end(),line.begin(),tolower);
        ret+=line+" ";
    }
    return ret;
}

double getSimilarity(const string &text1,const string & text2){
    vector<int> freqVec1=createFreqVec(text1);
    vector<int> freqVec2=createFreqVec(text2);

    int dotProd=dotPord(freqVec1,freqVec2);

    return dotProd/(mag(freqVec1)*mag(freqVec2));
}

vector<int> createFreqVec(const string &text){
    vector<int> result;
    for(const auto& word:FEATURE_VEC){
        result.push_back(countOccurences(word,text));
    }
    return result;

}

int countOccurrences(const string& word,const string &text){
    string toFind=" "+word+" ";
    //std::count;
    //std::search
    auto curr=text.begin();
    auto end=text.end();
    int count=0;

    while(curr!=end){
        auto found=std::search(curr,end,word.begin(),word.end());
        if(found==end)break;
        count++;
        curr=found+1;

    }
    return count;
}
const vector<string> FEATURE_VEC{"a"};
int main(){
    ifstream file1("madison.txt");
    ifstream file2("jj.txt");
    ifstream file3("hamilton.txt");
    ifstream file4("unknown.txt");

    string f_mad=fileToString(file1);
}