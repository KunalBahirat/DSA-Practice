#include <iostream>
using namespace std;

int main(){
    char arr[100];
    int n;
    cin>>n;
    cin>>arr;
    int low=0,high=n-1;
    while(low<high){
        if(arr[low]==arr[high]){
            low++;
            high--;
        }
        else{
            cout<<"Not a palindrome";
            return 0;
        }
    }
    cout<<"Palindrome";
    return 0;
}