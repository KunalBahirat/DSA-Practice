#include <bits/stdc++.h>
using namespace std;
void display(list <int> &lst){
    list <int> :: iterator it;
    for(it=lst.begin();it!=lst.end();it++){
        cout<<*it<<" ";
    } 
    cout<<endl;
}
int main(){
    list <int> l;
    l.push_back(5);
    l.push_back(9);
    l.push_back(12);
    l.push_back(4);
    l.push_back(1);
    display(l);

    list <int> l2(3);
    list <int> :: iterator it;
    it=l2.begin();
    *it=10;
    it++;
    *it=20;
    it++;
    *it=30;
    it++;
    display(l2);

    cout<<endl;
    l.sort();
    l.merge(l2);
    l.reverse();
    display(l);
    return 0;
}