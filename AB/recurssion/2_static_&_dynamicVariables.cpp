#include <iostream>
using namespace std;
int fun(int n){
    if(n==0){
        return 0;
    }
    else{
        return fun(n-1)+n;
    }
}
int main(){
    cout<<fun(5);
    return 0;
}

//static variable
// #include <iostream>
// using namespace std;
// int fun(int n){
//     static int x=0;
//     if(n>0){
//          x++;
//         return fun(n-1)+x;
//     }
//     else{
//        return 0;
//     }
// }
// int main(){
//     cout<<fun(5);
//     return 0;
// }

//global variable
// #include <iostream>
// using namespace std;
// int x=0;
// int fun(int n){
//     if(n>0){
//         x++;
//         return fun(n-1)+x;
//     }
//     else{
//         return 0;
//     }
// }
// int main(){
//     cout<<fun(5);
//     return 0;
// }