#include <iostream>
#include <vector>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n;
        cin>>n;
        vector <int> v(n);
        int ans=0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            if(v[i]>=1000) ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}