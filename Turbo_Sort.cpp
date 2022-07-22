// We have populated the solutions for the 10 easiest problems for your support.
// Click on the SUBMIT button to make a submission to this problem.

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int s[n];
    for(int i=0;i<n;i++){
        cin>>s[i];        
    }
    sort(s,s+n);
    for(int i=0;i<n;i++){
        cout<<s[i]<<"\n";
    }
    
    return 0;
}





