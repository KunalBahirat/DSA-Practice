// #include <iostream>
// using namespace std;
// void sum(int n){
//     int sum=(n*(n+1))/2;
//     cout<<"sum of first "<<n<<" natural number is= "<<sum<<endl;
// }
// int main(){
//     sum(20);
//     return 0;
// }


// recursive function
// #include <iostream>      //time complexity= O(n) bcoz it depends on no of calls here for 4 no of calls are 5.
// using namespace std;
// int sum(int n){
//     if(n==0){
//         return 0;
//     }
//     else{
//         return sum(n-1)+n;
//     }
// }
// int main(){
//     cout<<sum(20);
//     return 0;
// }


// loops
#include <iostream>
using namespace std;
int sum(int n){
    int sum=0;
    for(int i=1;i<=n;i++){
        sum=sum+i;
        
    }
    return sum;
}
int main(){
    cout<<sum(20);
    return 0;
}


