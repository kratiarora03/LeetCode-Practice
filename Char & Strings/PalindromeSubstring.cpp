#include <iostream>
using namespace std;

int expand(string s, int i, int j) {
    int count = 0;

    while (i >= 0 && j < s.length() && s[i] == s[j]) {
        count++;
        i--;
        j++;
    }
    return count;
}

int countSubstring(string s) {
    int totalCount = 0;
    for (int center = 0; center < s.length(); center++) {
        int odd = expand(s, center, center);
        int even = expand(s, center, center + 1);

        totalCount += odd + even;
    }
    return totalCount;
}

int main() {
    string s = "aba";
    int check = countSubstring(s);
    cout << check << endl;
    return 0;
}
