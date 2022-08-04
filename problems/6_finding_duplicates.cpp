#include <iostream>
using namespace std;

int main(){
    char A[]="finding";
    int i,length,H[26]={0};
    for(length=0;A[length]!='\0';length++){}
    for(i=0;i<length;i++){
        H[A[i]-97]+=1;
    }
    for(i=0;i<26;i++){
        if(H[i]>1){
            cout<<char(i+97)<<"=";
            cout<<H[i]<<endl;
        }
    }
    return 0;
}