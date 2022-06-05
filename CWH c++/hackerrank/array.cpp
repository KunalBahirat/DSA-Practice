#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    int a,b;
    cin>>a;
 
    
    if(a<1001){
        int num[a];
        
        for (int i = 1; i < a; i++)
        {
            cin>>num[i];
        }
        
        
        for (int i =a; i<=a; i--)
        {
            cout<<num[i]<<setw(2);
        }
        
        // for (int i = num[a]; num[i] <a; i--)
        // {
            
        // }
        //cout<<num[i]<<setw(2);
        
        
    }
    return 0;
}