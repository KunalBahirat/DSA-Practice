#include <iostream>
using namespace std;
#include<iomanip>
int main() {
    int a;
    cin>>a;
    int b;
    int arr[a];  
    for(int i=0;i<a;i++){
        cin>>b;
        arr[i]=b;
    }
    for(int i=0;i<a;i++){
        cout<<arr[i];
    }
    return 0;
}