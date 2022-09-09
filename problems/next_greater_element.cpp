#include <bits/stdc++.h>
using namespace std;

int main()
{
    stack<int> st;
    int n;
    n = 6;
    int a[n] = {4, 5, 2, 25, 7, 8};
    int ans[n] = {0};
    int count=0;
    int i=0;
    for (int i = 0; i < n; i++)
    {
        while (!st.empty() and a[i] > a[st.top()])
        {
            ans[st.top()] = a[i];
            st.pop();
            count++;
        }
        
        st.push(i);
    }
    while(!st.empty()){
        ans[st.top()]=-1;
        st.pop();
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout<<"count="<<count;           
    return 0;
}