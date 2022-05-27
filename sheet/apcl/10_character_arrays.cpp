#include <iostream>
using namespace std;

int main(){
    //finding if a array is palindrome
    // char arr[100];
    // int n;
    // cin>>n;
    // cin>>arr;
    // int low=0,high=n-1;
    // while(low<high){
    //     if(arr[low]==arr[high]){
    //         low++;
    //         high--;
    //     }
    //     else{
    //         cout<<"Not a palindrome";
    //         return 0;
    //     }
    // }
    // cout<<"Palindrome";


    //finding maximum word in array   *******************unsolved
    int n;
    cin>>n;
    char a[n+1];
    cin.ignore();
    cin.getline(a,n+1);

    int currlength=0;
    int i=0;
    int maxlength=0;
    while(a[i]!='\0'){
        if(a[i]!=' '){
            currlength++;
            maxlength=max(currlength,maxlength);
        }
        else{
            currlength=0;
        }
        i++;
    }

    cout<<maxlength<<endl;
    cout<<a;

    return 0;
}