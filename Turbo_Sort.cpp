// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set <int> s;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        s.insert(x);
    }
    for(auto i:s){
        cout<<i<<"\n";
    }
    
    return 0;
}





