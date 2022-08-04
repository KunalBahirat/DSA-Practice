#include <iostream>
using namespace std;


int main(){
    char A[]="python";
    char B[7];
    int i,j;
    for (j = 0;A[j] != '\0'; j++){}
    j=j-1;
    for(i=0;j>=0;i++,j--){
        B[i]=A[j];
    }
    B[i]='\0';
    cout<<"A="<<A<<endl;
    cout<<"B="<<B<<endl;
    return 0;



}
// int main(){
//     char A[]="python";
//     int i,j;
//     cout<<A<<endl;
//     for (j = 0;A[j] != '\0'; j++)
//     {
//     }
//     j=j-1;
//     cout<<"Length="<<j<<endl;
//     for(i=0;i<j;i++,j--){
//         char temp=A[i];
//         A[i]=A[j];
//         A[j]=temp;
//     }
//     cout<<A<<endl;
//     return 0;
// }