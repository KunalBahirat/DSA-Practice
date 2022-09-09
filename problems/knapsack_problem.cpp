#include <bits/stdc++.h>
using namespace std;
double knapsack(int obj[],int profit[],int weight[],int n,int cap){
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
    double mp=0;
    it=m.rbegin();
    while(it!=m.rend() and cap>0){
        if(weight[it->second]<=cap){
            cap-=weight[it->second];
            mp=mp+(profit[it->second]);
            it++;
        }
        else{
            mp=mp+(profit[it->second]*cap/weight[it->second]);
            cap=0;
            break;
        }
        cout<<"mp="<<mp<<endl;
    }
    return mp;
    

}
int main(){
    // int n=7;
    // int m=15;
    int n,m;
    cin>>n>>m;
    int obj[n];
    for(int i=0;i<n;i++){
        obj[i]=i+1;
    }
    // int profit[n]={6 ,10 ,18 ,15 ,3 ,5, 7};
    // int weight[n]={1 ,2, 4, 5 ,1 ,3 ,7};
    int profit[n];
    int weight[n];
    for(int i=0;i<n;i++) cin>>profit[i];
    for(int i=0;i<n;i++) cin>>weight[i];
    cout<<(double)knapsack(obj,profit,weight,n,m);
    

    return 0;
}