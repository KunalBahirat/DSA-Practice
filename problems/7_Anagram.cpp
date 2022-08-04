#include <iostream>
using namespace std;

int main(){
    char a[]="verbose";
    char b[]="observe";
    int i,length,H[26]={0};
    for(i=0;a[i]!='\0';i++){
        H[a[i]-97]+=1;
    }
    for(i=0;b[i]!='\0';i++){
        H[b[i]-97]-=1;
        if(H[b[i]-97]<0){
            cout<<"Not a Anagram"<<endl;
            break;
        }
    }
    
    if(b[i]=='\0'){
        cout<<"Its a Anagram"<<endl;
    }
    return 0;
}