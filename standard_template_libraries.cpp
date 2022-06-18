#include <iostream>
using namespace std;
#include <array>
#include <vector>
#include <queue>
#include <algorithm>
void show(priority_queue <int> t){
    while(!t.empty()){
        cout<<t.top()<<" ";
        t.pop();
    }
    cout<<endl;
}

void showMini(priority_queue <int ,vector <int>,greater <int>> t){
    while(!t.empty()){
        cout<<t.top()<<" ";
        t.pop();
    }
    cout<<endl;
}

int main(){
    // array<int ,5> a={0};
    // for(int i=0;i<a.size();i++){
    //     cout<<a[i]<<" ";
    // }
    // vector <int> v(5,0);
    // for(int a:v){
    //     cout<<a<<" ";
    // }

    // priority_queue <int> maxi;
    // maxi.push(1);
    // maxi.push(3);
    // maxi.push(2);
    // maxi.push(0);

    // // show(maxi);

    // priority_queue <int,vector <int> ,greater<int>> mini;
    // mini.push(10);
    // mini.push(30);
    // mini.push(20);
    // mini.push(40);
    // showMini(mini);

    string a="abcd";
    reverse(a.begin(),a.end());
    cout<<a;
    return 0;
}