//---------tail recurssion-----------
#include <iostream>
using namespace std;
void fun(int n){
    if(n>0){
        cout<<n<<" ";
        fun(n-1);
    }
}
int main(){
    fun(5);
    return 0;
}


//---------Head recurssion-----------
// #include <iostream>
// using namespace std;
// void fun(int n){
//     if(n>0){
//         fun(n-1);
//         cout<<n<<" ";
//     }
// }
// int main(){
//     fun(5);
//     return 0;
// }


//---------tree recurssion-----------
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
//     fun(5);
//     return 0;
// }

//---------Indirect recurssion-----------
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
//     funA(10);
//     return 0;
// }

//-------------------Nested recussion
// #include <iostream>
// using namespace std;

// int fun(int n){
//     if(n>0){
//         cout<<n<<" ";
//         return fun(fun(n-1));
//     }
// }
// main(){
//     cout<<fun(10);
//     return 0;
// }