#include <bits/stdc++.h>
using namespace std;
// f(i) =i2 0,1,2..
// h(x)=x%10
// h'(x)= (h(x) + f(i))%10

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
        int hash(int val,int i){        //hash func
            return (val%10)+ pow(i,2);
        }
        void insertValue(int val){
            int index=hash(val,0);
            if(hashtable[index]==-1){hashtable[index]=val;return;}
            int i=1;
            while(hashtable[hash(val,i)]!=-1){
                i++;
            }
            hashtable[hash(val,i)]=val;
        }
        void display(){
            for(int i=0;i<size;i++){
                if(hashtable[i]==-1) cout<<i<<" -> \n";
                else
                cout<<i<<" -> "<<hashtable[i]<<endl;
            }
        }
};
int main(){
    HashTable h(10);
    h.insertValue(23);
    h.insertValue(43);
    h.insertValue(13);
    h.insertValue(27);
    cout<<"\n";
    h.display();
    return 0;
}