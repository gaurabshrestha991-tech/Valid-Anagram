#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()) {
            return false;
        }

        vector<int> count(26,0);

        for (int i = 0; i < s.length(); i++) {
            count[s[i] - 'a']++;
            count[t[i] - 'a']--;
        }

        for (int val : count) {
            if (val != 0) {
                return false;
            }
        }
        return true;
    }
};

int main () {
    Solution sol;

    string s, t;

    cout << "Enter First String: ";
    cin >> s;

    cout << "Enter second String: ";
    cin >> t;

    if (sol.isAnagram(s, t)) {
        cout << "true" << endl;
        
    } else {
        cout << "False" << endl;
    }

    return 0;
}