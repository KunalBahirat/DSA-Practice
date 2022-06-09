#include <iostream>
#include <string>
#include <algorithm>
#include "bits/stdc++.h"
using namespace std;
long buzzTime(long N, long M, long L, long H[], long A[])
{
long low = 0;
         long high = max(L,M);
         long ans =0;
         while(low<=high)
         {
             long mid = (low+high)/2;
             long fast =0;
             for(long i=0;i<N;i++)
             {
                 if(H[i]+A[i]*mid>=L)
                 fast+=H[i]+A[i]*mid;
                
             }
             cout<<fast<<endl;
             cout<<low<<endl;
             cout<<mid<<endl;
             cout<<high<<endl;

             if(fast>=M)
             {
                 ans = mid;
                 high = mid-1;
             }
             else low = mid+1;
             
         }
         
         return ans;
}
int main()
{
    long l, m, n;
    cin >> l >> m >> n;
    long H[n], A[n];
    for (int i = 0; i < n; i++)
    {
        cin >> H[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    long ans = buzzTime(n, m, l, H, A);

    cout << "Yeah!!" << endl;
    cout << ans;

    return 0;
}