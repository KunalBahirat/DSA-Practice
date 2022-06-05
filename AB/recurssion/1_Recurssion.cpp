// //tail recurssion
// #include <iostream>
// using namespace std;
// void fun(int n){
//     if(n>0){
//     cout<<n<<" ";
//     fun(n-1);

//     }
// }
// int main(){
//     int a=3;
//     fun(a);
//     return 0;
// }

// //head recurssion
// #include <iostream>
// using namespace std;
// void fun(int n){
//     if(n>0){
//     fun(n-1);
//     cout<<n<<" ";
    

//     }
// }
// int main(){
//     int a=3;
//     fun(a);
//     return 0;
// }

// tree recurssion
// #include <iostream>
// using namespace std;
// void fun(int n){
//     if(n>0){
//         cout<<n<<" ";
//         fun(n-1);
//         fun(n-1);
//     }
// }
// int main(){
//     int a=3;
//     fun(a);
//     return 0;
// }

//Indirect recurssion
// #include <iostream>
// using namespace std;
// void funB(int);
// void funA(int n){
//     if(n>0){
//         cout<<n<<" ";
//         funB(n-1);
//     }
// }
// void funB(int n){
//     if(n>1){
//         cout<<n<<" ";
//         funA(n/2);
//     }
// }
// int main(){
//     funA(20);
//     return 0;
// }

// nested recurssion
#include <iostream>
using namespace std;
int fun(int n){
    if(n>100){
        return n-10;
    }
    else{
        return fun(fun(n+11));
    }
}
int main(){
    // by passing values less than 100 output will be 91
    cout<<fun(95);
    return 0;
}