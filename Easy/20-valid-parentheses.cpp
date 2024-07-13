#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    stack<char> myst;
    bool isValid(string s) {
       for(int i=0; i<s.size(); i++) {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
            myst.push(s[i]);
        } else {
            if (s[i] == ')') {
                if (myst.empty()) return false;
                if (myst.top() == '(') {
                    myst.pop();
                } else {
                    return false;
                }
            } 
            else if (s[i] == '}') {
                if (myst.empty()) return false;
                if (myst.top() == '{') {
                    myst.pop();
                } else {
                    return false;
                }
            } 
            else if (s[i] == ']') {
                if (myst.empty()) return false;
                if (myst.top() == '[') {
                    myst.pop();
                } else {
                    return false;
                }
            }
        }

       }
       if (myst.empty()) return true;
       return false;
    }
};
