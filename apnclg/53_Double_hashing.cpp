#include <bits/stdc++.h>
using namespace std;
// h1(x)=x%10
// h2(x)= R - x%R     R= highest prime no wrt size
// h'(x) = (h1(x) + i*h2(x))%10
int highestPrime(int n){
    int ans=INT_MIN;
    if(n<=10) return 7;
    for(int i=n;i>3;i--){
        if(i%2!=0 and i%3!=0 and i%5!=0 and i%7!=0){
            ans=max(ans,i);
        }
    }
    return ans;
}
class HashTable{
    int size;
    int R;
    int hashtable[];
    public:
        HashTable(int n){
            size=n;
            R=highestPrime(size);
            hashtable[size];
            for(int i=0;i<size;i++){
                hashtable[i]=-1;
            }
        }
        int hash(int val,int i){
            return ((val%10) + i*(R - val%R))%10;
        }
        void insertValue(int val){
            int index=hash(val,0);
            if(hashtable[index]==-1){hashtable[index]=val; return;}
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
    h.insertValue(5);
    h.insertValue(25);
    h.insertValue(15);
    h.insertValue(35);
    h.insertValue(95);
    h.display();
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;
// int highestPrime(int n){
//     int ans=INT_MIN;
//     if(n<=10) return 7;
//     for(int i=n;i>3;i--){
//         if(i%2!=0 and i%3!=0 and i%5!=0 and i%7!=0){
//             ans=max(ans,i);
//         }
//     }
//     return ans;
// }
// int main(){
//     int m;
//     cout<<highestPrime(50);
//     return 0;
// }