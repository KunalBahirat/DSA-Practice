#include <iostream>
using namespace std;
class bankDeposit{
    int principleValue;
    int years;
    float interestRate;
    float finalValue;
    public:
        bankDeposit(int p,int y,float i);
        bankDeposit(int p,int y,int I);
        void show();
};
bankDeposit ::bankDeposit(int p,int y,float i){
    principleValue=p;
    years=y;
    interestRate=i;
    // finalValue=(principleValue*years*interestRate)+principleValue; 
    finalValue=principleValue;
    
    for (int i = 0; i < years; i++)
    {
        finalValue=principleValue * (1+interestRate);
    }
     

}
bankDeposit :: bankDeposit(int p,int y,int I){
    principleValue=p;
    years=y;
    interestRate=float(I)/100;
    // finalValue=(principleValue*years*interestRate)+principleValue;  
    
    for (int i = 0; i < years; i++)
    {
        finalValue=principleValue * (1+interestRate);
    }
    

}
void bankDeposit :: show(){
    cout<<"Your "<<principleValue<<" Rs after "<<years<<" Years will be "<<finalValue<<" Rs"<<endl;
}
int main(){
    int p,y;
    float i;
    int I;
    cout<<"Enter values of p,y and i ";
    cin>>p>>y>>i;
    bankDeposit bd1=bankDeposit(p,y,i);
    bd1.show();

    cout<<"Enter values of p,y and i ";
    cin>>p>>y>>I;
    bankDeposit bd2=bankDeposit(p,y,I);
    
    bd2.show();

    
    return 0;
}