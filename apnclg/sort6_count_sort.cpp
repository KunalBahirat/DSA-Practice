#include <bits/stdc++.h>
using namespace std;
void countSort(vector <int> &v){
    int maxele=*max_element(v.begin(),v.end())+1;
    int aux[maxele];
    memset(aux,0,sizeof(int)*maxele);
    for(int i=0;i<v.size();i++){
        aux[v[i]]++;
    }
    for(int i=1;i<maxele;i++){
        aux[i]+=aux[i-1];
    }
    for(int i=0;i<maxele;i++){
        cout<<aux[i]<<" ";
    }
    cout<<"\n";
    vector<int> ans(v.size());
    for(int i=0;i<v.size();i++){
        ans[aux[v[i]]-1]=v[i];
        aux[v[i]]--;
    }
    
    for(int i=0;i<v.size();i++){
        cout<<ans[i]<<" ";
    }cout<<"\n";

}
void countSortNegative(vector<int> &v){
     minele=*min_element(v.begin(),v.end());
	int maxele=*max_element(v.begin(),v.end());
	cout<<maxele<<" "<<minele<<"\n";
	int range=maxele-minele+1;
	int aux[range]={0};
	for(int i=0;i<v.size();i++){
		aux[v[i]-minele]++;
	}
	for(int i=1;i<range;i++){
		aux[i]+=aux[i-1];
	}
	vector<int> ans(v.size());
	for(int i=0;i<v.size();i++){
		ans[aux[v[i]-minele]-1]=v[i];
		aux[v[i]-minele]--;
	}
	for(int i=0;i<v.size();i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
    int n=10;
    // cin>>n;
    vector<int> v={6 ,3 ,9 ,10 ,15 ,6 ,8 ,12 ,3 ,6};
    countSort(v);
    
   
    return 0;
}