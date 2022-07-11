#include <iostream>
using namespace std;

int main(){
    int num,deno;
    int result;
    cin>>num>>deno;
    try{
        if(deno==0){
            throw deno;
        }
        result=num/deno;
    }
    catch(int ex) {
        cout<<"Exception : division by zero is not allowed "<<ex<<endl;
    }
    cout<<result;
    return 0;
}