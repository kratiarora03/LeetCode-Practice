#include <iostream>
using namespace std;

string removeDuplicates(string s){
    string ans = ""; //empty string to store elements to check which the main string 
    int index = 0 ; 

    while (index < s.length()){
        if(ans.length() > 0 && ans[ans.length()-1 == index]){ // ans.length()-1 means the rightmost element of the string
            ans.pop_back();
        }
        else{
            ans.push_back(s[index]);

        }
        index++; 
    }
    return ans ; 
}

int main(){
    string s = "abbaz";
    string  print = removeDuplicates(s);
     cout << print << endl;
}