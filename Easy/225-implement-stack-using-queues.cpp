#include <bits/stdc++.h>
using namespace std;

class myStack
{
    public:

    queue<int> mainQ;

    void push(int x) {
        mainQ.push(x);
    }

    int pop() {
        queue<int> newQ;
        int last;
        while(!mainQ.empty()) {
            int k = mainQ.front();
            mainQ.pop();
            if (mainQ.empty()) {
                last = k;
                break;
            }
            newQ.push(k);
        }
        mainQ = newQ;
        return last;
    }

    int top() {
        queue<int> newQ;
        int last;
        while(!mainQ.empty()) {
            int k = mainQ.front();
            mainQ.pop();
            newQ.push(k);
            last = k;
        }
        mainQ = newQ;
        return last;
    }

    bool empty() {
        return mainQ.empty();
    }
};


int main()
{
    myStack ms;
    int n;
    cin>>n;
    while(n--) {
        int x;
        cin>>x;
        ms.push(x);
    }

    while(!ms.empty()) {
        cout<<ms.top()<<endl;
        ms.pop();
    }

    return 0;
}