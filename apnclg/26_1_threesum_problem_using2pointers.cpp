
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int input[n];
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    int key;
    cin>>key;
    sort(input,input+n);
    for(int i=0;i<n;i++){
        cout<<input[i]<<" ";
    }cout<<endl;
    cout<<"Key "<<key<<endl;
    for(int i=0;i<n-2;i++){
        if(i==0 || (i>0 and input[i]!=input[i-1])){
            int sum=0-input[i];int j=i+1,k=n-1;
            while(j<k){
                if(input[j]+input[k] == sum){
                    cout<<input[i]<<" "<<input[j]<<" "<<input[k]<<endl;

                    while(j<k and input[j]==input[j+1]) j++;
                    while(j<k and input[k]==input[k-1]) k--;
                    j++;k--;
                }
                else if(input[j]+input[k] < sum){
                    j++;
                }
                else k--;

            }
        }
    }
    return 0;
}