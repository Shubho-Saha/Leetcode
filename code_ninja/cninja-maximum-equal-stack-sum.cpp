#include <bits/stdc++.h>
using namespace std;

int maxSum(stack<int> &stk1, stack<int> &stk2, stack<int> &stk3)
{
    long long int sum1 = 0, sum2 = 0, sum3 = 0;
    stack<int> new1, new2, new3;

    while (!stk1.empty())
    {
        sum1 += stk1.top();
        new1.push(stk1.top());
        stk1.pop();
    }
    while(!new1.empty()) {
        stk1.push(new1.top());
        new1.pop();
    }


    while (!stk2.empty())
    {
        sum2 += stk2.top();
        new2.push(stk2.top());
        stk2.pop();
    }
    while(!new2.empty()) {
        stk2.push(new2.top());
        new2.pop();
    }

    while (!stk3.empty())
    {
        sum3 += stk3.top();
        new3.push(stk3.top());
        stk3.pop();
    }
    while(!new3.empty()) {
        stk3.push(new3.top());
        new3.pop();
    }
    // cout<<"before while\n";
    // cout<<sum1<<" "<<sum2<<" "<<sum3<<endl;

    while (true)
    {
        if (stk1.empty() || stk2.empty() || stk3.empty())
            return 0;
        if (sum1 == sum2 && sum2 == sum3)
            return sum1;

        if (sum1 >= sum2 && sum1 >= sum3)
        {
            if (!stk1.empty())
            {
                sum1 -= stk1.top();
                stk1.pop();
            }
        } 
        else if (sum2 >= sum1 && sum2 >= sum3) {
            if (!stk2.empty()) {
                sum2 -= stk2.top();
                stk2.pop();
            }
        } else if (sum3 >= sum1 && sum3 >= sum2) {
            if (!stk3.empty()) {
                sum3 -= stk3.top();
                stk3.pop();
            }
        }
    }
    return 0;
}

int main()
{
    stack<int> s1, s2, s3;
    s1.push(3);
    s1.push(5);
    s1.push(8);
    s2.push(2);
    s2.push(2);
    s2.push(4);
    s2.push(9);
    s2.push(6);
    s3.push(2);
    s3.push(1);
    s3.push(2);
    s3.push(3);

    long long int ans = maxSum(s1, s2, s3);
    cout<<ans<<endl;

    return 0;
}