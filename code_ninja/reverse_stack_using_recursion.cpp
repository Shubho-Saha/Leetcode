#include <bits/stdc++.h>
using namespace std;

void reverseStack(stack<int> &skt) {
    if (skt.empty()) return;

    int top = skt.top();
    skt.pop();
    reverseStack(skt);
    
    stack<int> newst;
    while(!skt.empty()) {
        newst.push(skt.top());
        skt.pop();
    }
    newst.push(top);

    while(!newst.empty()) {
        skt.push(newst.top());
        newst.pop();
    }
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);

    reverseStack(st);

    while(!st.empty()) {
        cout<<st.top()<<endl;
        st.pop();
    }    

    return 0;
}