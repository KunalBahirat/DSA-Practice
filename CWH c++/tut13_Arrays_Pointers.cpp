#include <iostream>
using namespace std;
int main(){
    
    /*
    cout<<"\nArrays"<<endl;
    int marks[]={12,4566,65,56};
    cout<<marks[0]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[3]<<endl;   
    */
   //---------------printing values of array using loops-------------------------

    int students[]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17};
    /*
    for(int i=0;i<15;i++){
        cout<<"The value at index "<<i<<" is= "<<students[i]<<endl;
    };
    */


    /*int i=0;
    while(i<16){
       cout<<"The value at index "<<i<<" is= "<<students[i]<<endl;
       i++;
    }
    */
    int i=0;
    do{
      cout<<"The value at index "<<i<<" is= "<<students[i]<<endl;
      i++;
    } while(i<14);


}