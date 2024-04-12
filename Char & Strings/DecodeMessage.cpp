 #include <iostream>
using namespace std;

string decodeMessage(string key , string message){
    char start = 'a';
    char mapping[280] = {0};

    for(auto ch: key){
        if(ch != ' ' && mapping[ch] == 0){
            mapping[ch] = start;
            start++;
        }
    }
    string ans;
    for(auto ch: message){
        if(ch == ' '){
            ans.push_back(' ');
        }else{
            char decoded = mapping[ch];
            ans.push_back(decoded);
        }
    }
    return ans; 
}

int main(){
    string key = "the quick brown fox jumps over the lazy dog";
    string message = "vkbs bs t suepuv";

    string decode = decodeMessage(key, message);
    cout << decode << endl;
    return 0;
}
