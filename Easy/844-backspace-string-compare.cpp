#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool backspaceCompare(string s, string t) {
        stack<char> s1;
        stack<char> s2;

        for(char c:s) {
            if (c == '#' && !s1.empty()) {
                s1.pop();
            } else {
                s1.push(c);
            }
        }

        cout<<s1.top()<<endl;

        for(char c:t) {
            if (c == '#' && !s2.empty()) {
                s2.pop();
            } else {
                s2.push(c);
            }
        }

        cout<<s2.top()<<endl;
        cout<<"s1 size: "<<s1.size()<<endl;
        cout<<"s2 size: "<<s2.size()<<endl;

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
        cout<<"s1 size: "<<s1.size()<<endl;
        cout<<"s2 size: "<<s2.size()<<endl;

        if (!s1.empty() || !s2.empty()) {
            flag = false;
        }
        cout<<flag<<endl;

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