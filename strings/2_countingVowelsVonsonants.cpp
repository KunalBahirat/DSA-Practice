#include <iostream>
using namespace std;

int main(){
    char A[]="How are you";
    int i;
    for(i=0;A[i]!='\0';i++){}
    cout<<A<<endl;
    cout<<"Length="<<i<<endl;
    int vcount=0,ccount=0;
    for(int j=0;j<i;j++){
       

        if(A[j]=='a' || A[j]=='e' || A[j]=='i' || A[j]=='o' || A[j]=='u' || A[j]=='A' || A[j]=='E' || A[j]=='I' || A[j]=='O' || A[j]=='U'){
            vcount+=1;
        }
        else if((A[j]>=65 && A[j]<=90) || (A[j]>=97 && A[j]<=122)){
            ccount+=1;
        }
       
    }
    int words=0;
    for(int x=0;x<i;x++){
        if(A[x]==' '){
            words++;
        }
    }
    cout<<"Words="<<words+1<<endl;
    cout<<"vowels="<<vcount<<endl;
    cout<<"consonants="<<ccount<<endl;
    return 0;
}