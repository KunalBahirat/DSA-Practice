#include <bits/stdc++.h>
using namespace std;
int knapsack(int obj[],int profit[],int weight[],int n,int cap){
    multiset <pair<double,int>> m;
    for(int i=0;i<n;i++){
        double x=(double)profit[i]/ (double)weight[i] ;
        m.insert({x,i});
    }
    auto it=m.rbegin();
    while(it!=m.rend()){
        cout<<it->second<<" "<<it->first<<endl;
        it++;
    }
    cout<<endl;
    it=m.rbegin(); int mp=0;
    while(it!=m->rend() and cap>0){
        if(weight[it->second]>=cap){
            cap-=weight[it->second];
            mp=mp+(profit[it->second]);
            it++;
        }
        else{
            mp=mp+(profit[it->second]*cap/weight[it->second]);
            cap=0;
            break;
        }
    }
    return mp;
    

}
int main(){
    int n=7;
    int m=15;
    // cin>>n>>m;
    int obj[n];
    for(int i=0;i<n;i++){
        obj[i]=i+1;
    }
    int profit[n]={10 ,5 ,15 ,7 ,6 ,18, 3};
    int weight[n]={2 ,3, 5, 7 ,1 ,4 ,1};

    // for(int i=0;i<n;i++) cin>>profit[i];
    // for(int i=0;i<n;i++) cin>>weight[i];
    cout<<knapsack(obj,profit,weight,n,m);
    

    return 0;
}