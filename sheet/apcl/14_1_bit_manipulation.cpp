#include <iostream>
using namespace std;
bool getBit(int num,int pos){
    return ((num &(1<<pos))!=0);
}
int setBit(int num,int pos){
    return ((num | (1<<pos)));
}
int clearBit(int num,int pos){
    return (num & ~(1<<pos));
}
int updateBit(int num,int pos,int bit){
    if(bit==1){
        return (num |(1<<pos));
    }
    else if (bit==0)
    {
        return (num & ~(1<<pos));
    }
    
}
int main(){
    int a;
    cin>>a;
    int pos;
    cin>>pos;
    // cout<<getBit(a,pos);
    // cout<<setBit(a,pos);
    // cout<<clearBit(a,pos);
    int bit;
    cin>>bit;
    cout<<updateBit(a,pos,bit);
    return 0;
}