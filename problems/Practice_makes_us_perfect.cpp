#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector <int> p(4);
    int ans=0;
    for(int i=0;i<p.size();i++){
        cin>>p[i];
        if(p[i]>=10){
            ans++;
        }
    }
    cout<<ans;
    
    return 0;
}