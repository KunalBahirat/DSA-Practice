#include <iostream>
using namespace std;

int main(){
    int n=0;
    cout<<"Number : ";
    cin>>n;
    // cin.ignore(1,'\n');
    cin.ignore(numeric_limits<streamsize>::max(),'\n');  // it will clear max buffer 
    char a[256];
    cout<<"a: "; 
    cin.getline(a,256);
    cout<<endl;
    cout<<"number: "<<n<<endl;
    cout<<"char a: "<<a<<endl;
    return 0;
}