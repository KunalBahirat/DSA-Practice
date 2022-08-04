#include <iostream>
using namespace std;
#include <math.h>

int main(){
    int n;
    cin>>n;
    int initialN=n;
    int sum=0;
    int lastdigit;
    while(n>0){
        lastdigit=n%10;
        // sum+= lastdigit*lastdigit*lastdigit;
        sum+=pow(lastdigit,3);
        n=n/10;
    }
    cout<<sum<<endl;
    if(sum==initialN){cout<<"Armstrong Number";}
    else{cout<<"Not an Armstrong Number";}

    return 0;
}   