#include <iostream>
using namespace std;

int main(){
    char a[]="painting";
    char b[]="painting";
    int i,j;
    for(i=0,j=0;a[i]!='\0' && b[j]!='\0';i++,j++){
        if(a[i]!=b[j]){
            break;
        }
    }
    if(a[i]==b[j]){cout<<"Equal";}
    else if(a[i]<b[j]){cout<<"smaller";}
    else {cout<<"greater";}

    return 0;
}



// int main(){
//     char a[]="reviver";
//     int j,i;
//     for(j=0;a[j]!='\0';j++){}
//     j=j-1;
//     for(i=0;i<j;i++,j--){
//         if(a[i]!=a[j]){
//             break;
//         }
        
//     }
//     if(a[i]!=a[j]){
//             cout<<"Not a palindrome"<<endl;
//         }
//     else if(a[i]==a[j]){
//             cout<<"Palindrome"<<endl;
//         }
    
//     return 0;
// }