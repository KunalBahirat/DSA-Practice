// In this type of problems first assign row and col. then -> logic
//       col
//   row  * * * * * 
//        * * * * *
//        * * * * *
//        * * * * *

// #include <iostream>
// using namespace std;

// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//       *****
//       *   *
//       *   *
//       *   *
//       *****
// #include <iostream>
// using namespace std;

// int main(){
//     int row,col;
//     cin>>row>>col;
//     for(int i=1;i<=row;i++){
//         for(int j=1;j<=col;j++){
//             if(i==1 || i==row || j==1 || j==col){
//                 cout<<"*";
//             }
//             // else if(j==1 || j==col){
//             //     cout<<"* ";
//             // }
//             else{
//                 cout<<" ";
//             }
            
//         }cout<<endl;
//     }
//     return 0;
// }


//     * * * * * 
//     * * * *
//     * * *
//     * *
//     *
// #include <iostream>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     for(int i=a;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }   


//          *
//         **
//        ***
//       ****
//      *****
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             if(j<=n-i){
//                 cout<<" ";
//             }
//             else{
//                 cout<<"*";
//             }
//         }
//         cout<<endl;
//     }
//     return 0;
// }



// 1 
// 2 2 
// 3 3 3
// 4 4 4 4
// 5 5 5 5 5 
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<i<<" ";
//                 
//             }
        
//         cout<<endl;

        
//     }
//     return 0;
// }


//      1 
//      2 3
//      4 5 6
//      7 8 9 10
//      11 12 13 14 15

// #include <iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n; 
//     int x=1;
//     for(int i=1;i<=n;i++){
//             for(int j=1;j<=i;j++){
//                 cout<<x<<" ";
//                 x++;
//             }
        
//         cout<<endl;
//     }
//     return 0;
// }


//Butterfly
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//        for(int j=1;j<=i;j++){
//            cout<<"*";
//        } 
//        int space=2*n-2*i;
//        for(int j=1;j<=space;j++){
//            cout<<" ";
//        }
//        for(int j=1;j<=i;j++){
//            cout<<"*";
//        } 
//        cout<<endl;
//     }

//     for(int i=n;i>=1;i--){
//        for(int j=1;j<=i;j++){
//            cout<<"*";
//        } 
//        int space=2*n-2*i;
//        for(int j=1;j<=space;j++){
//            cout<<" ";
//        }
//        for(int j=1;j<=i;j++){
//            cout<<"*";
//        } 
//        cout<<endl;
//     }
//     return 0;
// }   


// 1 2 3 4 5
// 1 2 3 4
// 1 2 3
// 1 2
// 1

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=n;i>=1;i--){
//         for(int j=1;j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//  1 
//  0 1
//  1 0 1
//  0 1 0 1
//  1 0 1 0 1
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=i;j++){
//             ((i+j)%2==0) ? cout<<1<<" " : cout<<0<<" " ;
//         }
//         cout<<endl;
//     }
//     return 0;
// }


//      _ _ _ _ * * * * * 
//      _ _ _ * * * * *
//      _ _ * * * * *
//      _ * * * * *
//      * * * * *

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
    
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=n;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// _ _ _ _ 1
// _ _ _ 1  2
// _ _ 1  2  3
// _ 1  2  3  4 
// 1  2  3  4  5
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     int x=1;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<" ";
//         }
//         for(int j=1;j<=i;j++){
//             cout<<j<<"  ";
        
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// palindromic pattern
// _ _ _ _ 1
// _ _ _ 2 1 2
// _ _ 3 2 1 2 3
// _ 4 3 2 1 2 3 4
// 5 4 3 2 1 2 3 4 5

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n-i;j++){
//             cout<<"  ";
//         }
//         for(int j=i;j>=1;j--){
//             cout<<j<<" ";
//         }
//         for(int j=2;j>1,j<=i;j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }



//      _ _ _ _ *
//      _ _ _ * * *
//      _ _ * * * * *
//      _ * * * * * * * 
//      * * * * * * * * *
//      * * * * * * * * *
//      _ * * * * * * *
//      _ _ * * * * *
//      _ _ _ * * *
//      _ _ _ _ *

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cin>>n;
//     cout<<"----------- STAR PATTERN ----------- \n";
//     // for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=n-i;j++){
//     //         cout<<"  ";
//     //     }
//     //     for(int j=i;j>=1;j--){
//     //         cout<<"* ";
//     //     }
//     //     for(int j=2;j<=i;j++){
//     //         cout<<"* ";
//     //     }
//     //     cout<<endl;
//     // }
//     // for(int i=n;i>=1;i--){
//     //     for(int j=1;j<=n-i;j++){
//     //         cout<<"  ";
//     //     }
//     //     for(int j=i;j>=1;j--){
//     //         cout<<"* ";
//     //     }
//     //     for(int j=2;j<=i;j++){
//     //         cout<<"* ";
//     //     }
//     //     cout<<endl;
//     // }

//     // In above code we can print stars by considering j= (2 * row no )-1

//     // for(int i=1;i<=n;i++){
//     //     for(int j=1;j<=n-i;j++){
//     //         cout<<"  ";
//     //     }
//     //     for(int j=1;j<=(2*i)-1;j++){
//     //         cout<<"* ";
//     //     }
//     //     cout<<endl;
//     // }
//     // for(int i=n;i>=1;i--){
//     //     for(int j=1;j<=n-i;j++){
//     //         cout<<"  ";
//     //     }
//     //     for(int j=1;j<=(2*i)-1;j++){
//     //         cout<<"* ";
//     //     }
//     //     cout<<endl;
//     // }
//     return 0;
// }



// ZIgzag Pattern
//             *       *     
//           *   *   *   *
//         *       *       *
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i =1;i<=3;i++){
        for(int j=1;j<=n;j++){
            if((i+j)%4==0  || i==2 && j%4==0){
                cout<<"* ";
            }
            
            else{cout<<"  ";}
        }
        cout<<endl;
    }
    return 0;
}