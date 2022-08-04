#include <iostream>
using namespace std;
#include <vector>

int main(){
    int n;
    cin>>n;
    vector <int> v(n);
    for(int i=0;i<v.size();i++){
        cin>>v[i];
    }
    int a,r1,r2;
    cin>>a;
    v.erase(v.begin()+a-1);
    cin>>r1>>r2;
    v.erase(v.begin()+r1-1,v.begin()+r2-1);
    cout<<v.size()<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }

    return 0;
}