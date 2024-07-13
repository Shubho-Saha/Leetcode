#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for(char c:s) {
            if (c == '#') {
                if (!s1.empty())
                s1.pop();
            } else {
                s1.push(c);
            }
        }

        for(char c:t) {
            if (c == '#') {
                if (!s2.empty())
                s2.pop();
            } else {
                s2.push(c);
            }
        }

        if (s1.empty() && s2.empty()) return true;
        bool flag = true;

        while(!s1.empty() && !s2.empty()) {
            if (s1.top() != s2.top()) {
                flag = false;
                break;
            }
            s1.pop();
            s2.pop();
        }

        if (!s1.empty() || !s2.empty()) {
            flag = false;
        }
      

        if (flag) return true;
        return false;
    }
};

int main()
{
    Solution s;
    s.backspaceCompare("y#fo##f", "y#f#o##f");

    return 0;
}