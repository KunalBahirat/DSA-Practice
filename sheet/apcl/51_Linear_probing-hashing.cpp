#include <bits/stdc++.h>
using namespace std;
//   Hash Function
//   f(i)=i       where i=0,1,2,...
//   h'(x)=(h(x)+f(i))%10 
class HashTable{
    int size;
    int hashtable[];
    public:
        HashTable(int n){
            size=n;
            hashtable[size];
            for(int i=0;i<size;i++){
                hashtable[i]=-1;
            }
        }
        int hash(int val,int i){      // Hash Function
            return ((val%10) + i)%10;
        }
        void insert_hash_value(int val){
            int index=hash(val,0);
            if(hashtable[index]==-1){
                hashtable[index]=val;
                return;
            }
            int i=1;
            while(hashtable[index]!=-1){
                index=hash(val,i);
                i++;
            }
            hashtable[index]=val;
        }
        void display(){
            for(int i=0;i<size;i++){
                if(hashtable[i]==-1) cout<<i<<" -> \n";
                else
                cout<<i<<" -> "<<hashtable[i]<<endl;
            }
        }
        void search(int val){
            int i=0;
            while(hashtable[hash(val,i)]!=val and hashtable[hash(val,i)]!=-1 ){
                i++;
            }
            if(hashtable[hash(val,i)] == val) cout<<val<<" is present in array "<<endl;
            else cout<<val<<" is not present in array "<<endl;
        }
        void deleteVal(int val){                          // Deletion not possible
            int i=0;
            while(hashtable[hash(val,i)]!=val and hashtable[hash(val,i)]!=-1){
                i++;
            }
            if(hashtable[hash(val,i)]==val ) {hashtable[hash(val,i)]=-1;
            cout<<val<<" deleted succesfully"<<endl; 
            return;}
            else cout<<val<<"Not found !"<<endl;
        }
};
int main(){
    // int a[9]={26,30,45,23,25,43,44,19,29};
    HashTable h(10);
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        h.insert_hash_value(x);
    }
    cout<<"\n";
    // h.display();
    // cout<<"enter value "<<endl;
    // cin>>n;
    // while(n!=-1){
    //     h.search(n);
    //     // int x;
    //     cin>>n;
    // }
    h.display();
    cout<<"enter value to delete"<<endl;
    cin>>n;
    while(n!=-1){
        h.deleteVal(n);
        cin>>n;
    }
    h.display();


    return 0;
}